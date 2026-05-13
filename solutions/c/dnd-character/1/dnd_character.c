#include "dnd_character.h"


int ability(void){
    int nums[4] = {0,0,0,0};
    
    int sum = 0;
    for (int i = 0; i < 5; i++){
       nums[i] = (rand() % 6) +1;
    }
    //Bubble sort
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 4; j++){
            if (nums[j] > nums[j + 1]){
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j+1] = temp;
            }
        }
    }
    nums[0] = 0;
    for (int i = 0; i < 5; i++){
        sum = sum + nums[i];
    }
    return sum;
}

int modifier(int score){
    return (int)floor((float)((float)(score - 10) / 2));
    
}

dnd_character_t make_dnd_character(void){
    dnd_character_t guy;
    guy.strength = ability();
    guy.dexterity = ability();
    guy.constitution = ability();
    guy.intelligence = ability();
    guy.wisdom = ability();
    guy.charisma = ability();
    guy.hitpoints = 10 + modifier(guy.constitution);

    return guy;
}