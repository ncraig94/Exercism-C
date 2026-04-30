#include "resistor_color.h"

int color_code(resistor_band_t color){
    return color;
}

const char *color_name(resistor_band_t color){
    static const char *names[] = {
        "black","brown","red","orange","yellow","green","blue","violet","grey","white"
    };
    return names[color];
}

const resistor_band_t *colors(void){
    static const resistor_band_t all_colors[]={
        BLACK, BROWN,RED,ORANGE,YELLOW,GREEN,BLUE,VIOLET,GREY,WHITE
    };
    return all_colors;
}
