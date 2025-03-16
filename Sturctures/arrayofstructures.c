#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{ // user defined data type
        int hp;
        int speed;
        int attack;
        char tier;
        char name[100];
    }Pokemon;
    
    Pokemon arr[3]; //arr[0],arr[1],arr[2]

    strcpy(arr[0].name,"Odish");
    arr[0].speed = 50;
    arr[0].attack = 60;
    arr[0].hp = 80;
    arr[0].tier = 'C';

    strcpy(arr[1].name,"Pikachu");
    arr[1].speed = 100;
    arr[1].attack = 80;
    arr[1].hp = 100;
    arr[1].tier = 'A';

    strcpy(arr[2].name,"Charizard");
    arr[2].speed = 70;
    arr[2].attack = 130;
    arr[2].hp = 150;
    arr[2].tier = 'S';
    
    for(int i = 0 ; i<3 ; i++){
        printf("Name : %s\n",arr[i].name);
        printf("Speed : %d\n",arr[i].speed);
        printf("HP : %d\n",arr[i].hp);
        printf("Attack : %d\n",arr[i].attack);
        printf("Tier : %c\n",arr[i].tier);
        printf("\n");
    }
    

    return 0;
}