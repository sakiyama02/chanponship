//TiCurveInfomation
//タイムアタックカーブインフォメーション
//

#include "../../include/TimeAttackInfomation/TiCurveInfomation.h"

TiCurveInfomation::TiCurveInfomation(){
    memset(curveData,0,sizeof(CurveData)*TIMEATTACK_NUM);
    int16 index = 0;

//template
/*
    //カーブで使用する数値設定
    //radius  :半径を設定
    //dirction:回転
    curveData[index].radius=0f;

    //どちらの方向にカーブするかの設定
    //dirction:回転方向の指定(CURVE_LEFT,CURVE_RIGHT)
    curveData[index].dirction=CURVE_LEFT;

    index++;
*/
    index=68;
    curveData[index].radius=190;
    curveData[index].dirction=CURVE_RIGHT;

    index=69;
    curveData[index].radius=200;
    curveData[index].dirction=CURVE_LEFT;
/*
    index=2;
    curveData[index].radius=463;//690.2339-100;
    curveData[index].dirction=CURVE_LEFT;

    index=3;
    curveData[index].radius=190;//287;
    curveData[index].dirction=CURVE_LEFT;

/*
    index=6;
    curveData[index].radius=201;
    curveData[index].dirction=CURVE_LEFT;

    index=8;
    curveData[index].radius=245.8;
    curveData[index].dirction=CURVE_RIGHT;
    */
   /*
    index=6;
    curveData[index].radius=201;
    curveData[index].dirction=CURVE_LEFT;

    index=8;
    curveData[index].radius=220.4375;
    curveData[index].dirction=CURVE_RIGHT;

    index=10;
    curveData[index].radius=120;//182.6987+100-100;
    curveData[index].dirction=CURVE_RIGHT;

    index=12;
    curveData[index].radius=180;
    curveData[index].dirction=CURVE_LEFT;

    index=14;
    curveData[index].radius=100;
    curveData[index].dirction=CURVE_LEFT;

    index=15;
    curveData[index].radius=100;
    curveData[index].dirction=CURVE_LEFT;


/*
    index=10;
    curveData[index].radius=182.6987+100;
    curveData[index].dirction=CURVE_RIGHT;

    index=12;
    curveData[index].radius=288.1559-123;
    curveData[index].dirction=CURVE_LEFT;

    index=13;
    curveData[index].radius=180;
    curveData[index].dirction=CURVE_RIGHT;

    index=16;
    curveData[index].radius=75.1251+80;
    curveData[index].dirction=CURVE_LEFT;

    index=19;
    curveData[index].radius=150;
    curveData[index].dirction=CURVE_RIGHT;
    */
}

TiCurveInfomation::~TiCurveInfomation(){
    delete(curveData);
}

int8 TiCurveInfomation::getter(int16 scene_num,CurveData* curve_data){
    memcpy(curve_data,&curveData[scene_num],sizeof(CurveData));

    return SYS_OK;
}