#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter First Number : ");
    scanf("%d",&a);
     printf("Enter Second Number : ");
      scanf("%d",&b);
    int r = a % b;
    printf("The Remainder is : %d",r);
    return 0;

}