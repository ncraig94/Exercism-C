#include "queen_attack.h"

attack_status_t can_attack(position_t queen_1, position_t queen_2){
    if (queen_1.row > 7 || queen_2.row > 7){
        return INVALID_POSITION;
    }
    else if (queen_1.column > 7 || queen_2.column > 7){
        return INVALID_POSITION;
    }
    else if (queen_1.column == queen_2.column && queen_1.row == queen_2.row){
        return INVALID_POSITION;
    }
    //if the queen1 and queen 2 are in the same row they can attack
    else if (queen_1.row == queen_2.row){
        return CAN_ATTACK;
    }
    //if the queen1 and queen 2 are in the same column they can attack
    else if (queen_1.column == queen_2.column){
        return CAN_ATTACK;
    }
    //if queen1 is diagnonal to queen2 they can attack
    //what does being diagonal mean on a chess board?
    else{    
    uint8_t queen1row = queen_1.row;
    uint8_t queen1col = queen_1.column;
        //left and up
            int i = queen1row;
            int j = queen1col;
            while(i >= 0 && j >= 0){
                i = i-1;
                j = j-1;
                if (i == queen_2.row && j == queen_2.column){
                    return CAN_ATTACK;
                }
            }
        //right and up
            i = queen1row;
            j = queen1col;
            while(i <= 7 && j >= 0){
                i = i+1;
                j = j-1;
                if (i == queen_2.row && j == queen_2.column){
                    return CAN_ATTACK;
                }
            }
        //left and down
            i = queen1row;
            j = queen1col;
            while(i != 0 && j <= 7){
                i = i-1;
                j = j+1;
                if (i == queen_2.row && j == queen_2.column){
                    return CAN_ATTACK;
                }
            }
        //right and down
            i = queen1row;
            j = queen1col;
            while(i <= 7 && j <= 7){
                i = i+1;
                j = j+1;
                if (i == queen_2.row && j == queen_2.column){
                    return CAN_ATTACK;
                }
            }
        return CAN_NOT_ATTACK;
         }
}