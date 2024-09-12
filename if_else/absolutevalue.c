#include<stdio.h>
int main()
{
    int n;
    printf("Enter the NUmber :");
    scanf("%d",&n);
    if(n<0){ //if n is negative
    n = n * (-1);
    printf("The Absolute value is : %d",n);\
        
    }
    else{
        printf("The Absolute value is : %d",n);
    }
    return 0;
}