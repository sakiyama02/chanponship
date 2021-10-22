//TiActionInfomation
//タイムアタックアクションインフォメーション
//

#include "../../include/TimeAttackInfomation/TiActionInfomation.h"

TiActionInfomation::TiActionInfomation(){
    memset(changeInfoData,0,sizeof(ChangeInfo) * TIMEATTACK_NUM);
    int16 index = 0;

/*
    //rgb切り替え値設定
    //r        :rの切り替え値
    //g        :gの切り替え値
    //b        :bの切り替え値
    //condition:切り替え地点の範囲指定(HIGH.LOW.NONE)
    changeInfoData[index].rgb_data.r=0;
    changeInfoData[index].rgb_data.g=0;
    changeInfoData[index].rgb_data.b=0;
    changeInfoData[index].rgb_data.condition=NONE;

    //座標切り替え値設定
    //xPosition :x座標の切り替え値
    //yPosition :y座標の切り替え値
    //xCondition:x座標切り替え地点の範囲指定(HIGH.LOW.NONE)
    //yCondition:y座標切り替え地点の範囲指定(HIGH.LOW.NONE)
    changeInfoData[index].pos_info_data.potision.xPosition=0f;
    changeInfoData[index].pos_info_data.potision.yPosition=0f;
    changeInfoData[index].pos_info_data.xCondition=NONE;
    changeInfoData[index].pos_info_data.yCondition=NONE;

    //向き切り替え値設定
    //direction:向きの切り替え値
    //condition:向きの切り替え地点の範囲指定(HIGH.LOW.NONE)
    changeInfoData[index].direction_data.direction=0;
    changeInfoData[index].direction_data.condition=NONE;

    //距離の切り替え値設定
    //distance:距離の切り替え値
    changeInfoData[index].distance=0;

    //v値切り替え値設定
    //v:v値の切り替え値
    //condition:v値の切り替え地点の範囲指定(HIGH.LOW.NONE)
    changeInfoData[index].vData.v=0;
    changeInfoData[index].vData.condition=NONE;

    //s値切り替え値設定
    //s:s値の切り替え値
    //condition:s値の切り替え地点の範囲指定(HIGH.LOW.NONE)
    changeInfoData[index].sData.s=0;
    changeInfoData[index].sData.condition=NONE;

    //切り替え方法
    //judge:切り替え方法の指定
    //(JUDGE_RGB,JUDGE_POS,JUDGE_DIS,JUDGE_DIR,JUDGE_NONE)
    // 色        座標      距離      向き       判断なし 
    changeInfoData[index].judge=JUDGE_NONE;

    //機体の動作設定
    //section_act:機体の動作設定
    //(LINE_TRACE,STRAIGHT,CURVE,LINE_CURVE,TURN,ARM_ACTION)
    changeInfoData[index].section_act=STRAIGHT;

    //機体の速度設定
    //speed:速度の設定
    changeInfoData[index].speed=0;
    changeInfoData[index].motor_power.leftPower=0;
    changeInfoData[index].motor_power.rightPower=0;

    index++;
*/

//template
/* ------------------------------------------------------------------ */
/* 第一ストレート                                                      */
/* ------------------------------------------------------------------ */
    changeInfoData[index].pos_info_data.potision.xPosition=2000;
    changeInfoData[index].pos_info_data.potision.yPosition=0;
    changeInfoData[index].pos_info_data.xCondition=LOW;
    changeInfoData[index].pos_info_data.yCondition=NONE;

    changeInfoData[index].judge=JUDGE_POS;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].speed=100;
    index++;

    changeInfoData[index].pos_info_data.potision.xPosition=1800;
    changeInfoData[index].pos_info_data.potision.yPosition=0;
    changeInfoData[index].pos_info_data.xCondition=LOW;
    changeInfoData[index].pos_info_data.yCondition=NONE;

    changeInfoData[index].judge=JUDGE_POS;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=98;
    changeInfoData[index].motor_power.rightPower=100;
    index++;

    changeInfoData[index].pos_info_data.potision.xPosition=1600;
    changeInfoData[index].pos_info_data.potision.yPosition=0;
    changeInfoData[index].pos_info_data.xCondition=LOW;
    changeInfoData[index].pos_info_data.yCondition=NONE;

    changeInfoData[index].judge=JUDGE_POS;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=99;
    changeInfoData[index].motor_power.rightPower=100;
    index++;

    changeInfoData[index].pos_info_data.potision.xPosition=1400;
    changeInfoData[index].pos_info_data.potision.yPosition=0;
    changeInfoData[index].pos_info_data.xCondition=LOW;
    changeInfoData[index].pos_info_data.yCondition=NONE;

    changeInfoData[index].judge=JUDGE_POS;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=100;
    changeInfoData[index].motor_power.rightPower=100;
    index++;

/* ------------------------------------------------------------------ */
/* 第一カーブ                                                      */
/* ------------------------------------------------------------------ */
    changeInfoData[index].pos_info_data.potision.xPosition=1320;
    changeInfoData[index].pos_info_data.potision.yPosition=0;
    changeInfoData[index].pos_info_data.xCondition=LOW;
    changeInfoData[index].pos_info_data.yCondition=NONE;

    changeInfoData[index].judge=JUDGE_POS;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=100;
    changeInfoData[index].motor_power.rightPower=95;
    index++;
    
    changeInfoData[index].pos_info_data.potision.xPosition=1240;
    changeInfoData[index].pos_info_data.potision.yPosition=0;
    changeInfoData[index].pos_info_data.xCondition=LOW;
    changeInfoData[index].pos_info_data.yCondition=NONE;

    changeInfoData[index].judge=JUDGE_POS;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=100;
    changeInfoData[index].motor_power.rightPower=90;
    index++;

    changeInfoData[index].pos_info_data.potision.xPosition=1100;
    changeInfoData[index].pos_info_data.potision.yPosition=0;
    changeInfoData[index].pos_info_data.xCondition=LOW;
    changeInfoData[index].pos_info_data.yCondition=NONE;

    changeInfoData[index].judge=JUDGE_POS;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=100;
    changeInfoData[index].motor_power.rightPower=85;
    index++;

    changeInfoData[index].pos_info_data.potision.xPosition=980;
    changeInfoData[index].pos_info_data.potision.yPosition=0;
    changeInfoData[index].pos_info_data.xCondition=LOW;
    changeInfoData[index].pos_info_data.yCondition=NONE;

    changeInfoData[index].judge=JUDGE_POS;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=100;
    changeInfoData[index].motor_power.rightPower=82;
    index++;

    changeInfoData[index].pos_info_data.potision.xPosition=900;
    changeInfoData[index].pos_info_data.potision.yPosition=0;
    changeInfoData[index].pos_info_data.xCondition=LOW;
    changeInfoData[index].pos_info_data.yCondition=NONE;

    changeInfoData[index].judge=JUDGE_POS;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=100;
    changeInfoData[index].motor_power.rightPower=79;
    index++;

    changeInfoData[index].pos_info_data.potision.xPosition=890;
    changeInfoData[index].pos_info_data.potision.yPosition=0;
    changeInfoData[index].pos_info_data.xCondition=LOW;
    changeInfoData[index].pos_info_data.yCondition=NONE;

    changeInfoData[index].judge=JUDGE_POS;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=100;
    changeInfoData[index].motor_power.rightPower=77;
    index++;

    changeInfoData[index].pos_info_data.potision.xPosition=875;
    changeInfoData[index].pos_info_data.potision.yPosition=0;
    changeInfoData[index].pos_info_data.xCondition=LOW;
    changeInfoData[index].pos_info_data.yCondition=NONE;

    changeInfoData[index].judge=JUDGE_POS;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=99;
    changeInfoData[index].motor_power.rightPower=76;
    index++;

    changeInfoData[index].pos_info_data.potision.xPosition=860;
    changeInfoData[index].pos_info_data.potision.yPosition=0;
    changeInfoData[index].pos_info_data.xCondition=LOW;
    changeInfoData[index].pos_info_data.yCondition=NONE;

    changeInfoData[index].judge=JUDGE_POS;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=98;
    changeInfoData[index].motor_power.rightPower=75;
    index++;

    changeInfoData[index].pos_info_data.potision.xPosition=0;
    changeInfoData[index].pos_info_data.potision.yPosition=200;//466;
    changeInfoData[index].pos_info_data.xCondition=NONE;
    changeInfoData[index].pos_info_data.yCondition=HIGH;

    changeInfoData[index].judge=JUDGE_POS;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=96;
    changeInfoData[index].motor_power.rightPower=73;
    index++;

    changeInfoData[index].pos_info_data.potision.xPosition=0;
    changeInfoData[index].pos_info_data.potision.yPosition=230;
    changeInfoData[index].pos_info_data.xCondition=NONE;
    changeInfoData[index].pos_info_data.yCondition=HIGH;

    changeInfoData[index].judge=JUDGE_POS;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=96;
    changeInfoData[index].motor_power.rightPower=71;
    index++;

    changeInfoData[index].pos_info_data.potision.xPosition=0;
    changeInfoData[index].pos_info_data.potision.yPosition=260;
    changeInfoData[index].pos_info_data.xCondition=NONE;
    changeInfoData[index].pos_info_data.yCondition=HIGH;

    changeInfoData[index].judge=JUDGE_POS;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=96;
    changeInfoData[index].motor_power.rightPower=70;
    index++;

    changeInfoData[index].pos_info_data.potision.xPosition=0;
    changeInfoData[index].pos_info_data.potision.yPosition=300;
    changeInfoData[index].pos_info_data.xCondition=NONE;
    changeInfoData[index].pos_info_data.yCondition=HIGH;

    changeInfoData[index].judge=JUDGE_POS;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=96;
    changeInfoData[index].motor_power.rightPower=69;
    index++;
    

    changeInfoData[index].pos_info_data.potision.xPosition=0;
    changeInfoData[index].pos_info_data.potision.yPosition=340;
    changeInfoData[index].pos_info_data.xCondition=NONE;
    changeInfoData[index].pos_info_data.yCondition=HIGH;

    changeInfoData[index].judge=JUDGE_POS;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=94;
    changeInfoData[index].motor_power.rightPower=67;
    index++;

    changeInfoData[index].pos_info_data.potision.xPosition=0;
    changeInfoData[index].pos_info_data.potision.yPosition=380;
    changeInfoData[index].pos_info_data.xCondition=NONE;
    changeInfoData[index].pos_info_data.yCondition=HIGH;

    changeInfoData[index].judge=JUDGE_POS;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=94;
    changeInfoData[index].motor_power.rightPower=66;
    index++;

/* ------------------------------------------------------------------ */
/* 第二カーブ                                                      */
/* ------------------------------------------------------------------ */

    changeInfoData[index].pos_info_data.potision.xPosition=0;
    changeInfoData[index].pos_info_data.potision.yPosition=440;
    changeInfoData[index].pos_info_data.xCondition=NONE;
    changeInfoData[index].pos_info_data.yCondition=HIGH;

    changeInfoData[index].judge=JUDGE_POS;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=92;
    changeInfoData[index].motor_power.rightPower=64;
    changeInfoData[index].speed=90;
    index++;

    changeInfoData[index].pos_info_data.potision.xPosition=0;
    changeInfoData[index].pos_info_data.potision.yPosition=480;
    changeInfoData[index].pos_info_data.xCondition=NONE;
    changeInfoData[index].pos_info_data.yCondition=HIGH;

    changeInfoData[index].judge=JUDGE_POS;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=90;
    changeInfoData[index].motor_power.rightPower=62;
    changeInfoData[index].speed=90;
    index++;

    changeInfoData[index].pos_info_data.potision.xPosition=0;
    changeInfoData[index].pos_info_data.potision.yPosition=520;
    changeInfoData[index].pos_info_data.xCondition=NONE;
    changeInfoData[index].pos_info_data.yCondition=HIGH;

    changeInfoData[index].judge=JUDGE_POS;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=90;
    changeInfoData[index].motor_power.rightPower=60;
    changeInfoData[index].speed=90;
    index++;

    changeInfoData[index].pos_info_data.potision.xPosition=0;
    changeInfoData[index].pos_info_data.potision.yPosition=560;
    changeInfoData[index].pos_info_data.xCondition=NONE;
    changeInfoData[index].pos_info_data.yCondition=HIGH;

    changeInfoData[index].judge=JUDGE_POS;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=90;
    changeInfoData[index].motor_power.rightPower=62;
    changeInfoData[index].speed=90;
    index++;

    changeInfoData[index].pos_info_data.potision.xPosition=0;
    changeInfoData[index].pos_info_data.potision.yPosition=600;
    changeInfoData[index].pos_info_data.xCondition=NONE;
    changeInfoData[index].pos_info_data.yCondition=HIGH;

    changeInfoData[index].judge=JUDGE_POS;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=92;
    changeInfoData[index].motor_power.rightPower=66;
    changeInfoData[index].speed=90;
    index++;

    changeInfoData[index].pos_info_data.potision.xPosition=0;
    changeInfoData[index].pos_info_data.potision.yPosition=640;
    changeInfoData[index].pos_info_data.xCondition=NONE;
    changeInfoData[index].pos_info_data.yCondition=HIGH;

    changeInfoData[index].judge=JUDGE_POS;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=92;
    changeInfoData[index].motor_power.rightPower=70;
    changeInfoData[index].speed=90;
    index++;

    changeInfoData[index].pos_info_data.potision.xPosition=0;
    changeInfoData[index].pos_info_data.potision.yPosition=680;
    changeInfoData[index].pos_info_data.xCondition=NONE;
    changeInfoData[index].pos_info_data.yCondition=HIGH;

    changeInfoData[index].judge=JUDGE_POS;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=92;
    changeInfoData[index].motor_power.rightPower=74;
    changeInfoData[index].speed=90;
    index++;

    changeInfoData[index].pos_info_data.potision.xPosition=0;
    changeInfoData[index].pos_info_data.potision.yPosition=720;
    changeInfoData[index].pos_info_data.xCondition=NONE;
    changeInfoData[index].pos_info_data.yCondition=HIGH;

    changeInfoData[index].judge=JUDGE_POS;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=92;
    changeInfoData[index].motor_power.rightPower=78;
    changeInfoData[index].speed=90;
    index++;

    changeInfoData[index].pos_info_data.potision.xPosition=0;
    changeInfoData[index].pos_info_data.potision.yPosition=800;
    changeInfoData[index].pos_info_data.xCondition=NONE;
    changeInfoData[index].pos_info_data.yCondition=HIGH;

    changeInfoData[index].judge=JUDGE_POS;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=92;
    changeInfoData[index].motor_power.rightPower=82;
    changeInfoData[index].speed=90;
    index++;

    changeInfoData[index].pos_info_data.potision.xPosition=0;
    changeInfoData[index].pos_info_data.potision.yPosition=840;
    changeInfoData[index].pos_info_data.xCondition=NONE;
    changeInfoData[index].pos_info_data.yCondition=HIGH;

    changeInfoData[index].judge=JUDGE_POS;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=92;
    changeInfoData[index].motor_power.rightPower=84;
    changeInfoData[index].speed=90;
    index++;

    changeInfoData[index].pos_info_data.potision.xPosition=0;
    changeInfoData[index].pos_info_data.potision.yPosition=860;
    changeInfoData[index].pos_info_data.xCondition=NONE;
    changeInfoData[index].pos_info_data.yCondition=HIGH;

    changeInfoData[index].judge=JUDGE_POS;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=92;
    changeInfoData[index].motor_power.rightPower=86;
    changeInfoData[index].speed=90;
    index++;

/* ------------------------------------------------------------------ */
/* 第二ストレート                                                      */
/* ------------------------------------------------------------------ */

    changeInfoData[index].pos_info_data.potision.xPosition=0;
    changeInfoData[index].pos_info_data.potision.yPosition=880;
    changeInfoData[index].pos_info_data.xCondition=NONE;
    changeInfoData[index].pos_info_data.yCondition=HIGH;

    changeInfoData[index].judge=JUDGE_POS;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=91;
    changeInfoData[index].motor_power.rightPower=84;
    changeInfoData[index].speed=90;
    index++;

    changeInfoData[index].pos_info_data.potision.xPosition=0;
    changeInfoData[index].pos_info_data.potision.yPosition=920;
    changeInfoData[index].pos_info_data.xCondition=NONE;
    changeInfoData[index].pos_info_data.yCondition=HIGH;

    changeInfoData[index].judge=JUDGE_POS;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=92;
    changeInfoData[index].motor_power.rightPower=82;
    changeInfoData[index].speed=90;
    index++;

    changeInfoData[index].pos_info_data.potision.xPosition=0;
    changeInfoData[index].pos_info_data.potision.yPosition=960;
    changeInfoData[index].pos_info_data.xCondition=NONE;
    changeInfoData[index].pos_info_data.yCondition=HIGH;

    changeInfoData[index].judge=JUDGE_POS;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=93;
    changeInfoData[index].motor_power.rightPower=81;
    changeInfoData[index].speed=90;
    index++;


    changeInfoData[index].pos_info_data.potision.xPosition=0;
    changeInfoData[index].pos_info_data.potision.yPosition=1000;//920;
    changeInfoData[index].pos_info_data.xCondition=NONE;
    changeInfoData[index].pos_info_data.yCondition=HIGH;

    changeInfoData[index].judge=JUDGE_POS;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=94;
    changeInfoData[index].motor_power.rightPower=81;
    changeInfoData[index].speed=90;
    index++;

    changeInfoData[index].pos_info_data.potision.xPosition=0;
    changeInfoData[index].pos_info_data.potision.yPosition=1100;//920;
    changeInfoData[index].pos_info_data.xCondition=NONE;
    changeInfoData[index].pos_info_data.yCondition=HIGH;

    changeInfoData[index].judge=JUDGE_POS;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=94;
    changeInfoData[index].motor_power.rightPower=80;
    changeInfoData[index].speed=90;
    index++;

/* ------------------------------------------------------------------ */
/* 第三カーブ                                                      */
/* ------------------------------------------------------------------ */

    changeInfoData[index].pos_info_data.potision.xPosition=0;
    changeInfoData[index].pos_info_data.potision.yPosition=1100;
    changeInfoData[index].pos_info_data.xCondition=NONE;
    changeInfoData[index].pos_info_data.yCondition=LOW;
    changeInfoData[index].direction_data.direction=-2;
    changeInfoData[index].direction_data.condition=LOW;

    changeInfoData[index].judge=JUDGE_DIR;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=94;
    changeInfoData[index].motor_power.rightPower=78;
    changeInfoData[index].speed=90;
    index++;

    changeInfoData[index].pos_info_data.potision.xPosition=0;
    changeInfoData[index].pos_info_data.potision.yPosition=1100;
    changeInfoData[index].pos_info_data.xCondition=NONE;
    changeInfoData[index].pos_info_data.yCondition=LOW;
    changeInfoData[index].direction_data.direction=-4;
    changeInfoData[index].direction_data.condition=LOW;

    changeInfoData[index].judge=JUDGE_DIR;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=94;
    changeInfoData[index].motor_power.rightPower=72;
    changeInfoData[index].speed=90;
    index++;

    changeInfoData[index].pos_info_data.potision.xPosition=0;
    changeInfoData[index].pos_info_data.potision.yPosition=1100;
    changeInfoData[index].pos_info_data.xCondition=NONE;
    changeInfoData[index].pos_info_data.yCondition=LOW;
    changeInfoData[index].direction_data.direction=-6;
    changeInfoData[index].direction_data.condition=LOW;

    changeInfoData[index].judge=JUDGE_DIR;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=92;
    changeInfoData[index].motor_power.rightPower=66;
    changeInfoData[index].speed=90;
    index++;

    changeInfoData[index].pos_info_data.potision.xPosition=0;
    changeInfoData[index].pos_info_data.potision.yPosition=1100;
    changeInfoData[index].pos_info_data.xCondition=NONE;
    changeInfoData[index].pos_info_data.yCondition=LOW;
    changeInfoData[index].direction_data.direction=-8;
    changeInfoData[index].direction_data.condition=LOW;

    changeInfoData[index].judge=JUDGE_DIR;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=90;
    changeInfoData[index].motor_power.rightPower=60;
    changeInfoData[index].speed=90;
    index++;

    changeInfoData[index].pos_info_data.potision.xPosition=0;
    changeInfoData[index].pos_info_data.potision.yPosition=1100;
    changeInfoData[index].pos_info_data.xCondition=NONE;
    changeInfoData[index].pos_info_data.yCondition=LOW;
    changeInfoData[index].direction_data.direction=-10;
    changeInfoData[index].direction_data.condition=LOW;

    changeInfoData[index].judge=JUDGE_DIR;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=88;
    changeInfoData[index].motor_power.rightPower=54;
    changeInfoData[index].speed=90;
    index++;

    changeInfoData[index].pos_info_data.potision.xPosition=0;
    changeInfoData[index].pos_info_data.potision.yPosition=1100;
    changeInfoData[index].pos_info_data.xCondition=NONE;
    changeInfoData[index].pos_info_data.yCondition=LOW;
    changeInfoData[index].direction_data.direction=-12;
    changeInfoData[index].direction_data.condition=LOW;

    changeInfoData[index].judge=JUDGE_DIR;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=87;
    changeInfoData[index].motor_power.rightPower=50;
    changeInfoData[index].speed=90;
    index++;

    changeInfoData[index].pos_info_data.potision.xPosition=0;
    changeInfoData[index].pos_info_data.potision.yPosition=1100;
    changeInfoData[index].pos_info_data.xCondition=NONE;
    changeInfoData[index].pos_info_data.yCondition=LOW;
    changeInfoData[index].direction_data.direction=-14;
    changeInfoData[index].direction_data.condition=LOW;

    changeInfoData[index].judge=JUDGE_DIR;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=86;
    changeInfoData[index].motor_power.rightPower=48;
    changeInfoData[index].speed=90;
    index++;

    changeInfoData[index].pos_info_data.potision.xPosition=0;
    changeInfoData[index].pos_info_data.potision.yPosition=1100;
    changeInfoData[index].pos_info_data.xCondition=NONE;
    changeInfoData[index].pos_info_data.yCondition=LOW;
    changeInfoData[index].direction_data.direction=-20;
    changeInfoData[index].direction_data.condition=LOW;

    changeInfoData[index].judge=JUDGE_DIR;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=84;
    changeInfoData[index].motor_power.rightPower=42;
    changeInfoData[index].speed=90;
    index++;

    changeInfoData[index].pos_info_data.potision.xPosition=0;
    changeInfoData[index].pos_info_data.potision.yPosition=1100;
    changeInfoData[index].pos_info_data.xCondition=NONE;
    changeInfoData[index].pos_info_data.yCondition=LOW;
    changeInfoData[index].direction_data.direction=-24;
    changeInfoData[index].direction_data.condition=LOW;

    changeInfoData[index].judge=JUDGE_DIR;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=84;
    changeInfoData[index].motor_power.rightPower=41;
    changeInfoData[index].speed=90;
    index++;

    changeInfoData[index].pos_info_data.potision.xPosition=0;
    changeInfoData[index].pos_info_data.potision.yPosition=1100;
    changeInfoData[index].pos_info_data.xCondition=NONE;
    changeInfoData[index].pos_info_data.yCondition=LOW;
    changeInfoData[index].direction_data.direction=-28;
    changeInfoData[index].direction_data.condition=LOW;

    changeInfoData[index].judge=JUDGE_DIR;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=84;
    changeInfoData[index].motor_power.rightPower=40;
    changeInfoData[index].speed=90;
    index++;

    changeInfoData[index].pos_info_data.potision.xPosition=0;
    changeInfoData[index].pos_info_data.potision.yPosition=1100;
    changeInfoData[index].pos_info_data.xCondition=NONE;
    changeInfoData[index].pos_info_data.yCondition=LOW;
    changeInfoData[index].direction_data.direction=-34;
    changeInfoData[index].direction_data.condition=LOW;

    changeInfoData[index].judge=JUDGE_DIR;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=82;
    changeInfoData[index].motor_power.rightPower=38;
    changeInfoData[index].speed=90;
    index++;

    changeInfoData[index].pos_info_data.potision.xPosition=0;
    changeInfoData[index].pos_info_data.potision.yPosition=1100;
    changeInfoData[index].pos_info_data.xCondition=NONE;
    changeInfoData[index].pos_info_data.yCondition=LOW;
    changeInfoData[index].direction_data.direction=-90;
    changeInfoData[index].direction_data.condition=LOW;

    changeInfoData[index].judge=JUDGE_DIR;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=80;
    changeInfoData[index].motor_power.rightPower=37;
    changeInfoData[index].speed=90;
    index++;

    changeInfoData[index].pos_info_data.potision.xPosition=0;
    changeInfoData[index].pos_info_data.potision.yPosition=1100;
    changeInfoData[index].pos_info_data.xCondition=NONE;
    changeInfoData[index].pos_info_data.yCondition=LOW;
    changeInfoData[index].direction_data.direction=-170;
    changeInfoData[index].direction_data.condition=LOW;

    changeInfoData[index].judge=JUDGE_DIR;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=79;
    changeInfoData[index].motor_power.rightPower=36;
    changeInfoData[index].speed=90;
    index++;

//* ------------------------------------------------------------------ */
/* 第三ストレート                                                      */
/* ------------------------------------------------------------------ */
    changeInfoData[index].pos_info_data.potision.xPosition=0;
    changeInfoData[index].pos_info_data.potision.yPosition=1100;
    changeInfoData[index].pos_info_data.xCondition=NONE;
    changeInfoData[index].pos_info_data.yCondition=LOW;
    changeInfoData[index].direction_data.direction=-168;
    changeInfoData[index].direction_data.condition=HIGH;

    changeInfoData[index].judge=JUDGE_DIR;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=98;
    changeInfoData[index].motor_power.rightPower=38;
    changeInfoData[index].speed=90;
    index++;

    changeInfoData[index].pos_info_data.potision.xPosition=0;
    changeInfoData[index].pos_info_data.potision.yPosition=1100;
    changeInfoData[index].pos_info_data.xCondition=NONE;
    changeInfoData[index].pos_info_data.yCondition=LOW;
    changeInfoData[index].direction_data.direction=-166;
    changeInfoData[index].direction_data.condition=HIGH;

    changeInfoData[index].judge=JUDGE_DIR;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=96;
    changeInfoData[index].motor_power.rightPower=40;
    changeInfoData[index].speed=90;
    index++;

    changeInfoData[index].pos_info_data.potision.xPosition=0;
    changeInfoData[index].pos_info_data.potision.yPosition=1100;
    changeInfoData[index].pos_info_data.xCondition=NONE;
    changeInfoData[index].pos_info_data.yCondition=LOW;
    changeInfoData[index].direction_data.direction=-164;
    changeInfoData[index].direction_data.condition=HIGH;

    changeInfoData[index].judge=JUDGE_DIR;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=94;
    changeInfoData[index].motor_power.rightPower=42;
    changeInfoData[index].speed=90;
    index++;

/* ------------------------------------------------------------------ */
/* 第四カーブ                                                      */
/* ------------------------------------------------------------------ */
    changeInfoData[index].pos_info_data.potision.xPosition=700;
    changeInfoData[index].pos_info_data.potision.yPosition=0;
    changeInfoData[index].pos_info_data.xCondition=HIGH;
    changeInfoData[index].pos_info_data.yCondition=NONE;

    changeInfoData[index].judge=JUDGE_POS;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=80;
    changeInfoData[index].motor_power.rightPower=97;
    changeInfoData[index].speed=81;
    index++;

    changeInfoData[index].pos_info_data.potision.xPosition=720;
    changeInfoData[index].pos_info_data.potision.yPosition=0;
    changeInfoData[index].pos_info_data.xCondition=HIGH;
    changeInfoData[index].pos_info_data.yCondition=NONE;

    changeInfoData[index].judge=JUDGE_POS;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=78;
    changeInfoData[index].motor_power.rightPower=97;
    changeInfoData[index].speed=81;
    index++;

    changeInfoData[index].pos_info_data.potision.xPosition=740;
    changeInfoData[index].pos_info_data.potision.yPosition=0;
    changeInfoData[index].pos_info_data.xCondition=HIGH;
    changeInfoData[index].pos_info_data.yCondition=NONE;

    changeInfoData[index].judge=JUDGE_POS;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=76;
    changeInfoData[index].motor_power.rightPower=96;
    changeInfoData[index].speed=81;
    index++;

    changeInfoData[index].pos_info_data.potision.xPosition=760;
    changeInfoData[index].pos_info_data.potision.yPosition=0;
    changeInfoData[index].pos_info_data.xCondition=HIGH;
    changeInfoData[index].pos_info_data.yCondition=NONE;

    changeInfoData[index].judge=JUDGE_POS;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=74;
    changeInfoData[index].motor_power.rightPower=96;
    changeInfoData[index].speed=81;
    index++;

    changeInfoData[index].pos_info_data.potision.xPosition=780;
    changeInfoData[index].pos_info_data.potision.yPosition=0;
    changeInfoData[index].pos_info_data.xCondition=HIGH;
    changeInfoData[index].pos_info_data.yCondition=NONE;

    changeInfoData[index].judge=JUDGE_POS;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=71;
    changeInfoData[index].motor_power.rightPower=96;
    changeInfoData[index].speed=81;
    index++;

    changeInfoData[index].pos_info_data.potision.xPosition=800;
    changeInfoData[index].pos_info_data.potision.yPosition=0;
    changeInfoData[index].pos_info_data.xCondition=HIGH;
    changeInfoData[index].pos_info_data.yCondition=NONE;

    changeInfoData[index].judge=JUDGE_POS;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=69;
    changeInfoData[index].motor_power.rightPower=96;
    changeInfoData[index].speed=81;
    index++;

    changeInfoData[index].pos_info_data.potision.xPosition=820;
    changeInfoData[index].pos_info_data.potision.yPosition=0;
    changeInfoData[index].pos_info_data.xCondition=HIGH;
    changeInfoData[index].pos_info_data.yCondition=NONE;

    changeInfoData[index].judge=JUDGE_POS;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=66;
    changeInfoData[index].motor_power.rightPower=97;
    changeInfoData[index].speed=81;
    index++;

    changeInfoData[index].pos_info_data.potision.xPosition=840;
    changeInfoData[index].pos_info_data.potision.yPosition=0;
    changeInfoData[index].pos_info_data.xCondition=HIGH;
    changeInfoData[index].pos_info_data.yCondition=NONE;

    changeInfoData[index].judge=JUDGE_POS;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=64;
    changeInfoData[index].motor_power.rightPower=97;
    changeInfoData[index].speed=81;
    index++;

    changeInfoData[index].pos_info_data.potision.xPosition=860;
    changeInfoData[index].pos_info_data.potision.yPosition=0;
    changeInfoData[index].pos_info_data.xCondition=HIGH;
    changeInfoData[index].pos_info_data.yCondition=NONE;

    changeInfoData[index].judge=JUDGE_POS;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=61;
    changeInfoData[index].motor_power.rightPower=98;
    changeInfoData[index].speed=81;
    index++;

    changeInfoData[index].pos_info_data.potision.xPosition=880;
    changeInfoData[index].pos_info_data.potision.yPosition=0;
    changeInfoData[index].pos_info_data.xCondition=HIGH;
    changeInfoData[index].pos_info_data.yCondition=NONE;

    changeInfoData[index].judge=JUDGE_POS;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=59;
    changeInfoData[index].motor_power.rightPower=98;
    changeInfoData[index].speed=81;
    index++;

    changeInfoData[index].pos_info_data.potision.xPosition=900;
    changeInfoData[index].pos_info_data.potision.yPosition=0;
    changeInfoData[index].pos_info_data.xCondition=HIGH;
    changeInfoData[index].pos_info_data.yCondition=NONE;

    changeInfoData[index].judge=JUDGE_POS;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=56;
    changeInfoData[index].motor_power.rightPower=99;
    changeInfoData[index].speed=81;
    index++;

    changeInfoData[index].pos_info_data.potision.xPosition=980;
    changeInfoData[index].pos_info_data.potision.yPosition=0;
    changeInfoData[index].pos_info_data.xCondition=HIGH;
    changeInfoData[index].pos_info_data.yCondition=NONE;

    changeInfoData[index].judge=JUDGE_POS;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=53;
    changeInfoData[index].motor_power.rightPower=99;
    changeInfoData[index].speed=81;
    index++;
/* ------------------------------------------------------------------ */
/* 第四ストレート                                                      */
/* ------------------------------------------------------------------ */

    changeInfoData[index].pos_info_data.potision.xPosition=1000;
    changeInfoData[index].pos_info_data.potision.yPosition=0;
    changeInfoData[index].pos_info_data.xCondition=HIGH;
    changeInfoData[index].pos_info_data.yCondition=NONE;

    changeInfoData[index].judge=JUDGE_POS;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=53;
    changeInfoData[index].motor_power.rightPower=99;
    changeInfoData[index].speed=81;
    index++;

    changeInfoData[index].pos_info_data.potision.xPosition=1030;
    changeInfoData[index].pos_info_data.potision.yPosition=0;
    changeInfoData[index].pos_info_data.xCondition=HIGH;
    changeInfoData[index].pos_info_data.yCondition=NONE;

    changeInfoData[index].judge=JUDGE_POS;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=56;
    changeInfoData[index].motor_power.rightPower=98;
    changeInfoData[index].speed=81;
    index++;

    changeInfoData[index].pos_info_data.potision.xPosition=1060;
    changeInfoData[index].pos_info_data.potision.yPosition=0;
    changeInfoData[index].pos_info_data.xCondition=HIGH;
    changeInfoData[index].pos_info_data.yCondition=NONE;

    changeInfoData[index].judge=JUDGE_POS;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=59;
    changeInfoData[index].motor_power.rightPower=97;
    changeInfoData[index].speed=81;
    index++;

    changeInfoData[index].pos_info_data.potision.xPosition=1090;
    changeInfoData[index].pos_info_data.potision.yPosition=0;
    changeInfoData[index].pos_info_data.xCondition=HIGH;
    changeInfoData[index].pos_info_data.yCondition=NONE;

    changeInfoData[index].judge=JUDGE_POS;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=63;
    changeInfoData[index].motor_power.rightPower=96;
    changeInfoData[index].speed=81;
    index++;

    changeInfoData[index].pos_info_data.potision.xPosition=1120;
    changeInfoData[index].pos_info_data.potision.yPosition=0;
    changeInfoData[index].pos_info_data.xCondition=HIGH;
    changeInfoData[index].pos_info_data.yCondition=NONE;

    changeInfoData[index].judge=JUDGE_POS;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=65;
    changeInfoData[index].motor_power.rightPower=95;
    changeInfoData[index].speed=81;
    index++;

    changeInfoData[index].pos_info_data.potision.xPosition=1150;
    changeInfoData[index].pos_info_data.potision.yPosition=0;
    changeInfoData[index].pos_info_data.xCondition=HIGH;
    changeInfoData[index].pos_info_data.yCondition=NONE;

    changeInfoData[index].judge=JUDGE_POS;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=68;
    changeInfoData[index].motor_power.rightPower=94;
    changeInfoData[index].speed=81;
    index++;


    changeInfoData[index].pos_info_data.potision.xPosition=1180;
    changeInfoData[index].pos_info_data.potision.yPosition=0;
    changeInfoData[index].pos_info_data.xCondition=HIGH;
    changeInfoData[index].pos_info_data.yCondition=NONE;

    changeInfoData[index].judge=JUDGE_POS;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=70;
    changeInfoData[index].motor_power.rightPower=92;
    changeInfoData[index].speed=81;
    index++;

    changeInfoData[index].pos_info_data.potision.xPosition=1210;
    changeInfoData[index].pos_info_data.potision.yPosition=0;
    changeInfoData[index].pos_info_data.xCondition=HIGH;
    changeInfoData[index].pos_info_data.yCondition=NONE;

    changeInfoData[index].judge=JUDGE_POS;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=73;
    changeInfoData[index].motor_power.rightPower=90;
    changeInfoData[index].speed=81;
    index++;


    changeInfoData[index].pos_info_data.potision.xPosition=1240;
    changeInfoData[index].pos_info_data.potision.yPosition=0;
    changeInfoData[index].pos_info_data.xCondition=HIGH;
    changeInfoData[index].pos_info_data.yCondition=NONE;

    changeInfoData[index].judge=JUDGE_POS;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=75;
    changeInfoData[index].motor_power.rightPower=87;
    changeInfoData[index].speed=81;
    index++;

    changeInfoData[index].pos_info_data.potision.xPosition=1270;
    changeInfoData[index].pos_info_data.potision.yPosition=0;
    changeInfoData[index].pos_info_data.xCondition=HIGH;
    changeInfoData[index].pos_info_data.yCondition=NONE;

    changeInfoData[index].judge=JUDGE_POS;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=78;
    changeInfoData[index].motor_power.rightPower=85;
    changeInfoData[index].speed=81;
    index++;

    changeInfoData[index].pos_info_data.potision.xPosition=1300;
    changeInfoData[index].pos_info_data.potision.yPosition=0;
    changeInfoData[index].pos_info_data.xCondition=HIGH;
    changeInfoData[index].pos_info_data.yCondition=NONE;

    changeInfoData[index].judge=JUDGE_POS;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=81;
    changeInfoData[index].motor_power.rightPower=83;
    changeInfoData[index].speed=81;
    index++;
    

    changeInfoData[index].pos_info_data.potision.xPosition=1320;
    changeInfoData[index].pos_info_data.potision.yPosition=0;
    changeInfoData[index].pos_info_data.xCondition=HIGH;
    changeInfoData[index].pos_info_data.yCondition=NONE;

    changeInfoData[index].judge=JUDGE_POS;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=81;
    changeInfoData[index].motor_power.rightPower=81;
    changeInfoData[index].speed=81;
    index++;
    
/* ------------------------------------------------------------------ */
/* 第五カーブ                                                      */
/* ------------------------------------------------------------------ */
    changeInfoData[index].pos_info_data.potision.xPosition=0;
    changeInfoData[index].pos_info_data.potision.yPosition=1100;
    changeInfoData[index].pos_info_data.xCondition=NONE;
    changeInfoData[index].pos_info_data.yCondition=LOW;
    changeInfoData[index].direction_data.direction=40;
    changeInfoData[index].direction_data.condition=HIGH;

    changeInfoData[index].judge=JUDGE_DIR;
    changeInfoData[index].section_act=CURVE;
    changeInfoData[index].speed=81;
    index++;
/* ------------------------------------------------------------------ */
/* 第六カーブ                                                      */
/* ------------------------------------------------------------------ */
    changeInfoData[index].pos_info_data.potision.xPosition=0;
    changeInfoData[index].pos_info_data.potision.yPosition=1100;
    changeInfoData[index].pos_info_data.xCondition=NONE;
    changeInfoData[index].pos_info_data.yCondition=LOW;
    changeInfoData[index].direction_data.direction=-82;
    changeInfoData[index].direction_data.condition=LOW;

    changeInfoData[index].judge=JUDGE_DIR;
    changeInfoData[index].section_act=CURVE;
    changeInfoData[index].speed=81;
    index++;
/* ------------------------------------------------------------------ */
/* 第五ストレート                                                      */
/* ------------------------------------------------------------------ */
    changeInfoData[index].pos_info_data.potision.xPosition=1870;
    changeInfoData[index].pos_info_data.potision.yPosition=0;
    changeInfoData[index].pos_info_data.xCondition=HIGH;
    changeInfoData[index].pos_info_data.yCondition=NONE;

    changeInfoData[index].judge=JUDGE_POS;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=81;
    changeInfoData[index].motor_power.rightPower=81;
    changeInfoData[index].speed=81;
    index++;

    changeInfoData[index].pos_info_data.potision.xPosition=1900;
    changeInfoData[index].pos_info_data.potision.yPosition=0;
    changeInfoData[index].pos_info_data.xCondition=HIGH;
    changeInfoData[index].pos_info_data.yCondition=NONE;

    changeInfoData[index].judge=JUDGE_POS;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=81;
    changeInfoData[index].motor_power.rightPower=81;
    changeInfoData[index].speed=81;
    index++;
/* ------------------------------------------------------------------ */
/* 第七カーブ                                                      */
/* ------------------------------------------------------------------ */
    changeInfoData[index].pos_info_data.potision.xPosition=0;
    changeInfoData[index].pos_info_data.potision.yPosition=1100;
    changeInfoData[index].pos_info_data.xCondition=NONE;
    changeInfoData[index].pos_info_data.yCondition=LOW;
    changeInfoData[index].direction_data.direction=-140;
    changeInfoData[index].direction_data.condition=LOW;

    changeInfoData[index].judge=JUDGE_DIR;
    changeInfoData[index].section_act=CURVE;
    changeInfoData[index].speed=81;
    index++;

    changeInfoData[index].pos_info_data.potision.xPosition=0;
    changeInfoData[index].pos_info_data.potision.yPosition=860;
    changeInfoData[index].pos_info_data.xCondition=NONE;
    changeInfoData[index].pos_info_data.yCondition=LOW;

    changeInfoData[index].judge=JUDGE_POS;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=81;
    changeInfoData[index].motor_power.rightPower=81;
    changeInfoData[index].speed=81;
    index++;

/* ------------------------------------------------------------------ */
/* 第八カーブ                                                      */
/* ------------------------------------------------------------------ */
    changeInfoData[index].pos_info_data.potision.xPosition=0;
    changeInfoData[index].pos_info_data.potision.yPosition=1100;
    changeInfoData[index].pos_info_data.xCondition=NONE;
    changeInfoData[index].pos_info_data.yCondition=LOW;
    changeInfoData[index].direction_data.direction=11;
    changeInfoData[index].direction_data.condition=HIGH;

    changeInfoData[index].judge=JUDGE_DIR;
    changeInfoData[index].section_act=CURVE;
    changeInfoData[index].speed=81;
    index++;

/* ------------------------------------------------------------------ */
/* 第六ストレート                                                      */
/* ------------------------------------------------------------------ */

    changeInfoData[index].pos_info_data.potision.xPosition=0;
    changeInfoData[index].pos_info_data.potision.yPosition=1800;
    changeInfoData[index].pos_info_data.xCondition=NONE;
    changeInfoData[index].pos_info_data.yCondition=HIGH;
    changeInfoData[index].direction_data.direction=20;
    changeInfoData[index].direction_data.condition=HIGH;

    changeInfoData[index].judge=JUDGE_POS;
    changeInfoData[index].section_act=LINE_TRACE;
    changeInfoData[index].speed=90;
    index++;

    changeInfoData[index].pos_info_data.potision.xPosition=0;
    changeInfoData[index].pos_info_data.potision.yPosition=2000;
    changeInfoData[index].pos_info_data.xCondition=NONE;
    changeInfoData[index].pos_info_data.yCondition=HIGH;

    changeInfoData[index].judge=JUDGE_POS;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].speed=100;
    index++;

    changeInfoData[index].pos_info_data.potision.xPosition=0;
    changeInfoData[index].pos_info_data.potision.yPosition=4000;
    changeInfoData[index].pos_info_data.xCondition=NONE;
    changeInfoData[index].pos_info_data.yCondition=HIGH;

    changeInfoData[index].judge=JUDGE_POS;
    changeInfoData[index].section_act=STRAIGHT;
    changeInfoData[index].motor_power.leftPower=100;
    changeInfoData[index].motor_power.rightPower=100;
    changeInfoData[index].speed=100;
    index++;


/* ------------------------------------------------------------ */

}

TiActionInfomation::~TiActionInfomation(){
    delete(changeInfoData);
}

int8 TiActionInfomation::getter(int16 scene_num,ChangeInfo* change_info){

    memcpy(change_info,&changeInfoData[scene_num],sizeof(ChangeInfo));
    return SYS_OK;
}