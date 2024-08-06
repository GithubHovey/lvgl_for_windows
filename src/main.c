#include <stdio.h>
#include "lv_port_disp_windows.h"


int main(){
    printf("Hello, from lvgl_windows!\n");
    lvgl_init();

    lv_obj_t *label = lv_label_create(lv_scr_act());
    lv_label_set_text(label, "Hello world!!!!!!");
    lv_obj_center(label);

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
