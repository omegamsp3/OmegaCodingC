//Write a C program to read any day number in integer and display the day name in word format.
//Test Data :
//4
//Expected Output :
//Thursday

#include <stdio.h>

int main()
{
    int a;
    printf("ENTER NUMBER : ");
    scanf("%d",&a);
    if(a==1){
        printf("MONDAY");
    }
    else if(a==2){
        printf("TUESDAY");
    }
    else if(a==3){
        printf("WEDNESDAY");
    }
    else if(a==4){
        printf("THURSDAY");
    }
    else if(a==5){
        printf("FRIDAY");
    }
    else if(a==6){
        printf("SATURDAY");
    }
    else if(a==7){
        printf("SUNDAY");
    }
    return 0;
}