/*------------------------------------------------------------------------------
 * @file    MYGUI.H
 * @author  Hovey https://space.bilibili.com/33582262?spm_id_from=333.1007.0.0
 * @date    2024/08/17 18:07:59
 * @brief   
 * -----------------------------------------------------------------------------
 * @attention 
 
------------------------------------------------------------------------------*/

/* Define to prevent recursive inclusion  ------------------------------------*/
#ifndef __MYGUI_H
#define __MYGUI_H

/* Files includes  -----------------------------------------------------------*/
#include "lv_port_disp_windows.h"

/* Defines -------------------------------------------------------------------*/
/*face parameter*/
#define EYES_Y_POS 200
#define EYES_INTERVAL 220
#define EYES_LENTH_MAX 90
#define EYES_LENTH_MIN 10
#define EYES_WIDTH 40
/*loading*/
#define WAVES_NUMB 9
#define WAVES_TYPE_NUMB 5
#define WAVES_WIDTH 400
#define WAVES_MAX_LENTH 300
#define WAVE_MIN_HEIGHT 25
#define WAVE_MAX_HEIGHT WAVES_MAX_LENTH/2
/*animation parameter*/
/*1. BLINK*/
#define BLINK_duration 1000 //(ms)
#define BLINK_step_value_start 0
#define BLINK_step_value_end 100
#define BLINK_repeat_delay 3000 //(ms) 
#define BLINK_repeat_cnt LV_ANIM_REPEAT_INFINITE  //0 :不循环 LV_ANIM_REPEAT_INFINITE：循环
/*2.LOADINGWAVE*/
#define LOADINGWAVE_duration 3000 //(ms)
#define LOADINGWAVE_step_value_start 0
#define LOADINGWAVE_step_value_end 10
#define LOADINGWAVE_repeat_delay 0 //(ms) 
#define LOADINGWAVE_repeat_cnt LV_ANIM_REPEAT_INFINITE
/* Variables -----------------------------------------------------------------*/
enum EXPRESSION{
    LEFT_EYE,
    RIGHT_EYE,
    MOUTH
};
enum ANIMATION{
    BLINK,
    LOADINGWAVE
};

typedef struct _Wave
{
    lv_point_t wave_point[WAVES_NUMB][2];
    lv_obj_t * wave[WAVES_NUMB];
}LoadingWave;

typedef struct _animation{
    uint32_t duration;
    int32_t step_value_range[2];
    uint32_t repeat_delay;
    uint16_t repeat_cnt;
    lv_anim_t anim;
    void * animation_exec_func;
    uint8_t lock;
}Animation;
/* Functions ----------------------------------------------------------------*/
void GUI_init(void);
int Blink(void);

int WaveLoading(void);

#endif
