#include "perfect_numbers.h"

int classify_number(int n){
    if (n < 1){
        return -1;
    }
    
    int sum = 0;

    for (int i = 1; i <= n/2; i++){
        if (n % i == 0){
            sum += i;
        }
    }
    if (sum == n){
        return 1;
    }
    else if (sum > n){
        return 2;
    }
    else if (sum < n){
        return 3;
    }
    else{
        return -1;
    } 
}