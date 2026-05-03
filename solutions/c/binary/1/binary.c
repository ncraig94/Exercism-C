#include "binary.h"

int convert(const char *input){
    int bin_length = (int)strlen(input);
    int total = 0;
    for (int i = 0; i < bin_length; i++){
        if (input[i] != '1' && input[i] != '0'){
            return -1;
        }
        else if (input[i] == '1'){
            total = total + pow(2, abs(bin_length-i-1));  
        }
    }
    return total;
}