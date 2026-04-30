#include "grains.h"
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <inttypes.h>

uint64_t square(uint8_t index){
    //number of grains on a given square
    //square 1 = 2^0
    //square 2 = 2^1
    //square 3 = 2^2
    //square 4 = 2^3 ...
    return pow(2, index-1);
}

uint64_t total(void){
    uint64_t sum = 0;
    for (uint64_t i = 0; i < 64; i++){
        sum += (1ULL << i);
    }
    printf("Value: %" PRIu64 "\n",sum);
    return sum;
}