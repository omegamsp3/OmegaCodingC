#include<stdio.h>
#include<string.h>
typedef struct Pokemon{
    int hp;
    int speed;
    int attack;
    char tier;
    char name[20];
}pokemon;

typedef struct legendaryPokemon{
    pokemon normal;
    char ability[10];
}legendaryPokemon;

legendaryPokemon mewtwo;
int main(){
    strcpy(mewtwo.ability,"Pressure");
    mewtwo.normal.hp = 200;
    mewtwo.normal.speed = 120;
    mewtwo.normal.attack = 300;
    mewtwo.normal.tier = 'S';

    printf("%s\n",mewtwo.ability);
    printf("%d\n",mewtwo.normal.hp);
    printf("%d\n",mewtwo.normal.speed);
    printf("%d\n",mewtwo.normal.attack);
    printf("%c\n",mewtwo.normal.tier);
\
    return 0;
}