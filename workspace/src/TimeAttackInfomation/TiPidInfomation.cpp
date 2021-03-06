//TiPidInfomation
//タイムアタックPIDインフォメーション
//

#include "../../include/TimeAttackInfomation/TiPidInfomation.h"

TiPidInfomation::TiPidInfomation(){
    memset(pidData,0,sizeof(PIDData)*TIMEATTACK_NUM);
    int16 index = 0;

//template
/*
    //pidゲイン値の設定
    //p:p値の設定
    //i:i値の設定
    //d:d値の設定
    pidData[index].pGain=0f;
    pidData[index].iGain=0f;
    pidData[index].dGain=0f;

    //v値の設定
    pidData[index].targetVal=0f;

    index++;
*/    
#define target 85

    index=70;
    pidData[index].pGain=0.4f;
    pidData[index].iGain=0.3f;
    pidData[index].dGain=0.15f;
    pidData[index].targetVal=target;
/*
    index=0;
    pidData[index].pGain=0.2f;
    pidData[index].iGain=0.3f;
    pidData[index].dGain=0.0f;
    pidData[index].targetVal=target;
    */
   // 2
/*
    index=1;
    pidData[index].pGain=0.2f;
    pidData[index].iGain=0.3f;
    pidData[index].dGain=0.1f;
    pidData[index].targetVal=target;
/*
    index=2;
    pidData[index].pGain=0.2f;
    pidData[index].iGain=0.3f;
    pidData[index].dGain=0.1f;
    pidData[index].targetVal=target;
*/
/*
    index=4;
    pidData[index].pGain=0.2f;
    pidData[index].iGain=0.3f;
    pidData[index].dGain=0.1f;
    pidData[index].targetVal=target;

    index=7;
    pidData[index].pGain=0.2f;
    pidData[index].iGain=0.3f;
    pidData[index].dGain=0.05f;
    pidData[index].targetVal=target;

    index=8;
    pidData[index].pGain=0.3f;
    pidData[index].iGain=0.4f;
    pidData[index].dGain=0.1f;
    pidData[index].targetVal=target;


    index=9;
    pidData[index].pGain=0.3f;
    pidData[index].iGain=0.3f;
    pidData[index].dGain=0.07f;
    pidData[index].targetVal=target;

    index=13;
    pidData[index].pGain=0.3f;
    pidData[index].iGain=0.3f;
    pidData[index].dGain=0.07f;
    pidData[index].targetVal=target;
/*
    index=20;
    pidData[index].pGain=0.01f;
    pidData[index].iGain=0.01f;
    pidData[index].dGain=0.01f;
    pidData[index].targetVal=target;

    index=21;
    pidData[index].pGain=0.4f;
    pidData[index].iGain=0.3f;
    pidData[index].dGain=0.15f;
    pidData[index].targetVal=target;

    index=22;
    pidData[index].pGain=0.4f;
    pidData[index].iGain=0.3f;
    pidData[index].dGain=0.15f;
    pidData[index].targetVal=target;

    index=23;
    pidData[index].pGain=0.3f;
    pidData[index].iGain=0.25f;
    pidData[index].dGain=0.1f;
    pidData[index].targetVal=130;

    index=24;
    pidData[index].pGain=0.4f;
    pidData[index].iGain=0.4f;
    pidData[index].dGain=0.1f;
    pidData[index].targetVal=target;

    index=25;
    pidData[index].pGain=0.3f;
    pidData[index].iGain=0.25f;
    pidData[index].dGain=0.1f;
    pidData[index].targetVal=133;
*/
}

TiPidInfomation::~TiPidInfomation(){
    delete(pidData);
}

int8 TiPidInfomation::getter(int16 scene_num,PIDData* pid_data){
    
    memcpy(pid_data,&pidData[scene_num],sizeof(PIDData));
    return SYS_OK;
}