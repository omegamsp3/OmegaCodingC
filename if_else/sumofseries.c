//sum of series 1-2+3-4+5-6+7-8

#include <stdio.h>

int main()
{
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);
    int sum = 0;
    if(n % 2 ==0){
        sum = -n/2;
        printf("SUM : %d",sum);
    }
    else{
        sum = (-n/2) + n;
        printf("SUM : %d",sum);
    }
    return 0;
}