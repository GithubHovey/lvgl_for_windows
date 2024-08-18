#include <stdio.h>
#include "lv_port_disp_windows.h"
#include "myGUI.h"
#define EYES_INTERVAL_ 200
#define EYES_Y_POS 200
#define EYES_LENTH 100
static lv_point_t line1_points[] = {
    {MY_DISP_HOR_RES/2-EYES_INTERVAL_/2,150},
    {MY_DISP_HOR_RES/2-EYES_INTERVAL_/2,250}
};
static lv_point_t line2_points[] = {
    {MY_DISP_HOR_RES/2+EYES_INTERVAL_/2,150},
    {MY_DISP_HOR_RES/2+EYES_INTERVAL_/2,250}
};
static lv_point_t line3_points[] = {
    {220,300},
    {260,300}
};
static void set_lenth(void * obj, int16_t v)
{
    int16_t y1,y2,k,t,c,y;
    y1 = 50;
    y2 = 5;
    t = 60;
    k = (y1-y2)/(50-t/2);
    c = y1 -100 * k;
    if(v < 100/2-t/2)
    {
        y = -k*v + y1;
    }
    else if(v > 100/2+t/2){
        y = k*v + c;
    }
    else{
        y = y2;
    }
    // line1_points[0].x = MY_DISP_HOR_RES/2-EYES_INTERVAL_/2;
    line1_points[0].y = EYES_Y_POS - y;
    line1_points[1].y = EYES_Y_POS + y;
    lv_line_set_points(obj,line1_points,2);
    // lv_label_set_text_fmt(label,"%d%%",v);
}

int main(){
    printf("Hello, from lvgl_windows!\n");
    lvgl_init();
    GUI_init();
    // Blink();
#if 0
    // lv_obj_t *background = lv_obj_create(lv_scr_act());
    lv_obj_t *line1 = lv_line_create(lv_scr_act());
    lv_line_set_points(line1,line1_points,2);
    lv_obj_set_style_line_width(line1,40,LV_PART_MAIN);
    lv_obj_set_style_line_rounded(line1,true,LV_PART_MAIN);
    lv_obj_set_style_line_color(line1,lv_palette_main(LV_PALETTE_BLUE),LV_PART_MAIN);
    // lv_label_set_text(label, "Hello world!!!!!!");
    // lv_obj_center(line1);
    lv_obj_t *line2 = lv_line_create(lv_scr_act());
    lv_line_set_points(line2,line2_points,2);
    lv_obj_set_style_line_width(line2,40,LV_PART_MAIN);
    lv_obj_set_style_line_rounded(line2,true,LV_PART_MAIN);
    lv_obj_set_style_line_color(line2,lv_palette_main(LV_PALETTE_BLUE),LV_PART_MAIN);

    lv_obj_t *line3 = lv_line_create(lv_scr_act());
    lv_line_set_points(line3,line3_points,2);
    lv_obj_set_style_line_width(line3,10,LV_PART_MAIN);
    lv_obj_set_style_line_rounded(line3,true,LV_PART_MAIN);
    lv_obj_set_style_line_color(line3,lv_palette_main(LV_PALETTE_BLUE),LV_PART_MAIN);
    
    lv_anim_t a;
    lv_anim_init(&a);
    lv_anim_set_var(&a, line1);
    lv_anim_set_exec_cb(&a, set_lenth); //运行函数
    lv_anim_set_time(&a, 500);//运行时间
    lv_anim_set_repeat_count(&a, 3);    //动画重复次数
    lv_anim_set_repeat_delay(&a, 3000);  //重播延时时间
    lv_anim_set_values(&a, 0, 100); //value范围
    lv_anim_start(&a);  //动画开始
#endif

    while (1) {
        /*your code*/
        lv_timer_handler();
        delayms(5);
    }
    return 0;
}


/**
* @brief  
* @param  
* @return 
*/
