#include<stdio.h>
int main()
{
    int a;
    printf("ENTER MONTH : ");
    scanf("%d",&a);
    if(a==1 || a==3 || a==5 || a==7 || a==8 || a==10 || a==12){
        printf("31 DAYS");
    }
    else if(a==2){
        printf("28 DAYS");
    }
    else{
        printf("30 DAYS");
    }
    return 0;
}