#include "hamming.h"

int compute(const char *lhs, const char *rhs){
    int hams = 0;
    if (strlen(lhs) != strlen(rhs)){
        return -1;
    }
    for (long unsigned int i = 0; i < strlen(lhs); i++){
        if (lhs[i] != rhs[i]){
            hams++;
        }
    }
    return hams;
}