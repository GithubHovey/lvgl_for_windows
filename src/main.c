#include <stdio.h>
#include "lv_port_disp_windows.h"
#define EYES_INTERVAL 200

int main(){
    printf("Hello, from lvgl_windows!\n");
    lvgl_init();
    static lv_point_t line1_points[] = {
        {MY_DISP_HOR_RES/2-EYES_INTERVAL/2,150},
        {MY_DISP_HOR_RES/2-EYES_INTERVAL/2,250}
    };
    static lv_point_t line2_points[] = {
        {MY_DISP_HOR_RES/2+EYES_INTERVAL/2,150},
        {MY_DISP_HOR_RES/2+EYES_INTERVAL/2,250}
    };
    static lv_point_t line3_points[] = {
        {220,300},
        {260,300}
    };
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
