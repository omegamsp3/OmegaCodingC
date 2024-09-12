#include<stdio.h>
int main()
{
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);
    if(n%5==0 && n%3==0){
        printf("It is Divisible");
    }
    else {
        printf("It is not Divisible");
    }
   return 0; 
}
