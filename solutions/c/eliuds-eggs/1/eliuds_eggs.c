#include "eliuds_eggs.h"

int egg_count(int num){
    int count = 0;
    while (num >0){
        count += num & 1;
        num >>= 1;
    }
    return count;
}