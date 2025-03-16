#include<stdio.h>
int main(){
    typedef struct pokemon{ // user defined data type
        int hp;
        int speed;
        int attack;
        char tier;
    }Pokemon;
    
    Pokemon pikachu;
    Pokemon chrizard;
    
    pikachu.attack = 80;
    pikachu.speed = 100;
    pikachu.hp = 70;
    pikachu.tier = 'A';

    struct pokemon charizard;
    charizard.attack = 130;
    charizard.speed = 80;
    charizard.hp = 100;
    charizard.tier = 'S';

    printf("Attack : %d\n",pikachu.attack);
    printf("Speed : %d\n",pikachu.speed);
    printf("HP : %d\n",pikachu.hp);
    printf("Tier : %c\n\n",pikachu.tier);

    printf("Attack : %d\n",charizard.attack);
    printf("Speed : %d\n",charizard.speed);
    printf("HP : %d\n",charizard.hp);
    printf("Tier : %c",charizard.tier);

    return 0;
}