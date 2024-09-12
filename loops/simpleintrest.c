#include<stdio.h>
int main()
{
    int p,t,count;
    float r,SI;
    printf("ENTER PRINCIPAL,TIME,RATE : ");
    scanf("%d %d %f",&p,&t,&r);

    count = 1;
    while(count<=3){
        SI = p*r*t / 100;
        printf(" SI = %f",SI);
        count ++;
    }
    return 0;
}