#include<stdio.h>
int main()
{
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);
    if(n%5==0 || n%3==0){
       if(n%15!=0){
           printf("The number is divisible by 5 or 3 but not 15");
       }
       else{
           printf("The number is divisible by 15");
       }
    }
    else{
        printf("The number is not divisible by 5 or 3");
    }
    return 0;
}