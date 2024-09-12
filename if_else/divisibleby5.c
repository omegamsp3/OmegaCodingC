#include<stdio.h>
int main()
{
    int n;
    printf("Enter the Number :");
    scanf("%d",&n);
    if(n%5 == 0){
        printf("Divisible by 5");
    }
    else{
        printf("Not Divisilble by 5");
    }
    return 0;
}