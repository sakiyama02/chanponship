#include "../../include/Scenario/Garage.h"
Garage::Garage(){}
Garage::~Garage(){}
int8 Garage::run(int16 scene_num) {
    
    //ガレージにシーンが一つもない場合正常終了
    if(GARAGE_NUM==0){
        return SYS_OK;
    }

    //エラー格納変数
    int8 retChk=SYS_NG;

    // 情報クラスのインスタンス化
    GaActionInfomation ActionInfomation;
    GaCurveInfomation CurveInfomation;
    GaPidInfomation PidInfomation;
    GaPositionCorrectionInfomation PositionCorrectionInfomation;

    // 情報構造体のインスタンス化
    ChangeInfo changeInfo;
    DirectionData directionData;
    CurveData curveData;
    PIDData pidData;
    PositionCorrectionData positioncorrectionData;

    //構造体の初期化
    memset(&changeInfo,0,sizeof(ChangeInfo));
    memset(&directionData,0,sizeof(DirectionData));
    memset(&curveData,0,sizeof(CurveData));
    memset(&pidData,0,sizeof(PIDData));
    memset(&positioncorrectionData,0,sizeof(PositionCorrectionData));

    //情報クラスから行動情報取得
    retChk=ActionInfomation.getter(scene_num,&changeInfo);
    retChk=CurveInfomation.getter(scene_num,&curveData);
    retChk=PidInfomation.getter(scene_num,&pidData);
    retChk=PositionCorrectionInfomation.getter(scene_num,&positioncorrectionData);

//補正のオンの場合CORRECTIONDATA_ONを定義
#ifdef CORRECTIONDATA_ON
    //補正構造体のJudgeTypeを確認して補正を使用するか取得
    if(positioncorrectionData.correctionCondition!=JUDGE_NONE){
    //補正クラスのインスタンス取得
        PositionCorrection &positionCorrection=
        PositionCorrection::getInstance();

        retChk=positionCorrection.fixSetter(
            positioncorrectionData);
    }
#endif
 Action *action=NULL;
    //動作の選択
    switch(changeInfo.section_act){
        //ライントレース
        case LINE_TRACE:
        //コンストラクタ引数：
        //構造体ChangeInfo内のspeedと構造体PIDData
            action=new LineTrace;
        break;

        //直進
        //コンストラクタ引数：構造体ChangeInfo内のspeed
        case STRAIGHT:
            action=new Straight;
        break;

        //カーブ
        //コンストラクタ引数：
        //構造体ChangeInfo内のspeedとCurveData構造体
        case CURVE:
            action=new Curve;
        break;

        //ラインカーブ
        //コンストラクタ引数：
        //構造体ChangeInfo内のspeedとCurveData構造体とカーブ構造体
        case LINE_CURVE:
            action=new Curve;
        break;

        //旋回
        //コンストラクタ引数：
        //構造体ChangeInfo内のspeedとDirectionData構造体
        case TURN:
            action=new Turn;
        break;

        //アーム動作
        //構造体ChangeInfo内のspeed
        case ARM_ACTION:
            action=new ArmAction;
        break;
        case ARMDOWN_ACTION:
            action=new ArmDownAction;
        break;

        //一応
        default:
        break;
    }
    retChk=action->run(changeInfo.speed,pidData,changeInfo.direction_data.direction,curveData,changeInfo.motor_power);
    delete action;
    return retChk;
}

//
//更新タスクでの処理
//
int8 Garage::sceneChenge(int16* scene_num){
    //引数のエラーチェック
    if(scene_num==NULL){
        return SYS_PARAM;
    }
    if(GARAGE_NUM==0){
        *scene_num=-1;
        return SYS_OK;
    }
    int8 retChk=SYS_NG;

    // 情報クラスのインスタンス化
    ChangeInfo changeInfo;
    PositionData curpositionData;
    RGBData currgbData;
    DirectionData curdirectionData;
    uint16 curdistanceData=0;
    VData curvData;
    SData cursData;
    //シングルトンのセンサ管理からインスタンスのポインタを取得
    SensorManager &senserManage=SensorManager::getInstance();
    //シングルトンの自己位置推定からインスタンスのポインタを取得
    CarPosition &carPosition=CarPosition::getInstance();
    //構造体の初期化
    memset(&changeInfo,0,sizeof(ChangeInfo));

    //ガレージの切り替え情報クラスをインスタンス化
    GaActionInfomation ActionInfomation;
    //切り替え情報から情報取得
    retChk=ActionInfomation.getter(*scene_num,&changeInfo);

    //切り替え判定情報から処理選択
    switch(changeInfo.judge){
        //シーン切り替え判定がrgb値の場合
        case JUDGE_RGB:
            memset(&currgbData,0,sizeof(RGBData));
        //rgbの現在時点最新状態を取得
            senserManage.rgbGetter(&currgbData);
        //rgb値を目標値と現在値を比較
            retChk=colorJudge(currgbData,changeInfo.rgb_data,changeInfo.rgb_data.condition);
            if(retChk==SYS_OK){
                *scene_num+=1;
            }
        break;
        //シーン切り替え判定が座標場合
        case JUDGE_POS:
            memset(&curpositionData,0,sizeof(PositionData));
        //座標の現在時点最新状態を取得
            carPosition.getPos(&curpositionData);
         //XYを判断する場合
            if(changeInfo.pos_info_data.xCondition<2&&changeInfo.pos_info_data.yCondition<2){
                retChk=xPositionJudge(curpositionData.xPosition,
                                      changeInfo.pos_info_data.potision.xPosition,
                                      changeInfo.pos_info_data.xCondition);
                if(retChk!=SYS_OK){
                    break;
                }
                retChk=yPositionJudge(curpositionData.yPosition,
                                      changeInfo.pos_info_data.potision.yPosition,
                                      changeInfo.pos_info_data.yCondition);
                if(retChk==SYS_OK){
                    *scene_num+=1;
                }
                break;
            }
        
        //Xだけを判断する場合
            if(changeInfo.pos_info_data.xCondition<2){
                retChk=xPositionJudge(curpositionData.xPosition,
                                      changeInfo.pos_info_data.potision.xPosition,
                                      changeInfo.pos_info_data.xCondition);
                if(retChk==SYS_OK){
                    *scene_num+=1;
                }
                break;
            }

        //Yだけを判断する場合
            if(changeInfo.pos_info_data.yCondition<2){
                retChk=yPositionJudge(curpositionData.yPosition,
                                      changeInfo.pos_info_data.potision.yPosition,
                                      changeInfo.pos_info_data.yCondition);
                if(retChk==SYS_OK){
                    *scene_num+=1;
                }
            }
        break;

        //シーン切り替え判定が距離の場合
        case JUDGE_DIS:
        //超音波での距離の現在時点最新情報を取得
            senserManage.distanceGetter(&curdistanceData);
            retChk=distanceJudge(curdistanceData,changeInfo.distance);
            if(retChk==SYS_OK){
                *scene_num+=1;
            }
        break;

        //シーン切り替え判定が向きの場合
        case JUDGE_DIR:
            memset(&curdirectionData,0,sizeof(DirectionData));
            carPosition.getDir(&curdirectionData.direction);
            retChk=directionJudge(curdirectionData.direction,
                                  changeInfo.direction_data.direction,
                                  changeInfo.direction_data.condition);
            if(retChk==SYS_OK){
                *scene_num+=1;
            }
        break;
        case JUDGE_V:
            memset(&curvData,0,sizeof(VData)); 
            senserManage.hsvGetter(&curvData.v);
            retChk=vJudge(curvData.v,changeInfo.vData.v,changeInfo.vData.condition);
            if(retChk==SYS_OK){
                *scene_num+=1;
            }      
        break;
        case JUDGE_S:
            memset(&cursData,0,sizeof(SData));
            senserManage.saturationGetter(&cursData.s);
            retChk=sJudge(cursData.s,changeInfo.sData.s,changeInfo.sData.condition);
            if(retChk==SYS_OK){
                *scene_num+=1;
            }      
        break;
        case JUDGE_SEND:
        case JUDGE_NONE:
        break;
        default:
        break;    
    }

    //ガレージのシーンの終了かの確認
    //シーンの分岐のために超音波の距離を取得
    if(*scene_num>GARAGE_NUM-1){
        *scene_num=-1;
    }
    return retChk;
}

//
//コードがネストで逝ってしまいそうなので臨時で作成（検討する必要がある）
//

//rgbの判定
//引数：現在のrgb値、目標のrgb値、(現在と目標の差分範囲の指定値)
//戻り値：切り替え条件を満たしていればSYS_OK
//        切り替え条件を満たしていなければSYS_NG
int8 Garage::colorJudge(RGBData cur_rgbdata,RGBData change_rgbdata,Range condition){
    int8 resultr=0;
    int8 resultg=0;
    int8 resultb=0;
    //目標のrgb-現在のrgbの差分を計算
    resultr=cur_rgbdata.r-change_rgbdata.r;
    resultg=cur_rgbdata.g-change_rgbdata.g;
    resultb=cur_rgbdata.b-change_rgbdata.b;
    if(resultr>0&&resultg>0&&resultb>0){
        if(condition==HIGH){
            return SYS_OK;
        }
        else{
            return SYS_NG;
        }
    }

    if(resultr<0&&resultg<0&&resultb<0){
        if(condition==LOW){
            return SYS_OK;
        }
        else{
            return SYS_NG;
        }
    }

    if(resultr==0&&resultg==0&&resultb==0){
        return SYS_OK;
    }

    return SYS_NG;
}

//X座標の判定
//引数：現在のX座標値、目標のX座標値、現在と目標の差分範囲の指定値
//戻り値：切り替え条件を満たしていればSYS_OK
//        切り替え条件を満たしていなければSYS_NG
int8 Garage::xPositionJudge(float cur_xpositionData,float change_xpositionData,Range condition){
    float resultx=0;
    resultx=cur_xpositionData-change_xpositionData;
    if(resultx>0){
        if(condition==HIGH){
            return SYS_OK;
        }
        return SYS_NG;
    }
    if(resultx<0){
        if(condition==LOW){
            return SYS_OK;
        }
        return SYS_NG;        
    }
    if(resultx==0){
        if(condition==NONE){
            return SYS_OK;
        }
        return SYS_NG;        
    }
    return SYS_NG;
}

//Y座標の判定
//引数：現在のY座標値、目標のY座標値、現在と目標の差分範囲の指定値
//戻り値：切り替え条件を満たしていればSYS_OK
//        切り替え条件を満たしていなければSYS_NG
int8 Garage::yPositionJudge(float cur_ypositionData,float change_ypositionData,Range condition){
    float resulty=0;
    resulty=cur_ypositionData-change_ypositionData;
    if(resulty>0){
        if(condition==HIGH){
            return SYS_OK;
        }
        return SYS_NG;
    }
    if(resulty<0){
        if(condition==LOW){
            return SYS_OK;
        }
        return SYS_NG;        
    }
    if(resulty==0){
        if(condition==NONE){
            return SYS_OK;
        }
        return SYS_NG;        
    }
    return SYS_NG;
}


//距離の判定
//引数：現在の距離値、目標の距離値
//戻り値：切り替え条件を満たしていればSYS_OK
//        切り替え条件を満たしていなければSYS_NG
int8 Garage::distanceJudge(uint16 cur_distanceData,uint16 change_distanceData){

    int16 resultdistance=0;
    resultdistance=cur_distanceData-change_distanceData;
    if(resultdistance<0){
        return SYS_OK;        
    }
    /*距離を範囲指定する場合に使用（間違って作った）
    if(resultdistance>0){
        if(condition==HIGH){
            return SYS_OK;
        }
        return SYS_NG;
    }
    
    */
    if(resultdistance==0){
        return SYS_OK;
    }
    return SYS_NG;
}

//向きの判定
//引数：現在の向き値、目標の向き値、現在と目標の差分範囲の指定値 
//マイナスの値を入れるとバグるので注意
//戻り値：切り替え条件を満たしていればSYS_OK
//        切り替え条件を満たしていなければSYS_NG
int8 Garage::directionJudge(float cur_directionData,float change_directionData,Range condition){
    float resultdirection=0;
    resultdirection=cur_directionData-change_directionData;
    if(resultdirection>0){
        if(condition==HIGH){
            return SYS_OK;
        }
        return SYS_NG;
    }
    if(resultdirection<0){
        if(condition==LOW){
            return SYS_OK;
        }
        return SYS_NG;        
    }
    if(resultdirection==0){
        if(condition==NONE){
            return SYS_OK;
        }
        return SYS_NG;        
    }
    return SYS_NG;
}

//v値の判定
int8 Garage::vJudge(uint16 cur_vData,uint16 change_vData,Range condition){
    int16 resultv=0;
    resultv=cur_vData-change_vData;
    if(resultv>0){
        if(condition==HIGH){
            return SYS_OK;
        }
        return SYS_NG;
    }
    if(resultv<0){
        if(condition==LOW){
            return SYS_OK;
        }
        return SYS_NG;        
    }
    if(resultv==0){
        if(condition==NONE){
            return SYS_OK;
        }
        return SYS_NG;        
    }
    return SYS_NG;
}

//s値の判定
int8 Garage::sJudge(uint16 cur_sData,uint16 change_sData,Range condition){
    int16 results=0;
    results=cur_sData-change_sData;
    if(results>0){
        if(condition==HIGH){
            return SYS_OK;
        }
        return SYS_NG;
    }
    if(results<0){
        if(condition==LOW){
            return SYS_OK;
        }
        return SYS_NG;        
    }
    if(results==0){
        if(condition==NONE){
            return SYS_OK;
        }
        return SYS_NG;        
    }
    return SYS_NG;
}