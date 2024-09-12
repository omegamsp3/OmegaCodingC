//9 99 999 9999 99999......
#include <stdio.h>

int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    int t = 9; // using another variable t 
    int i = 1;
    int sum = 0;
    while(i<=n){
        sum = sum + t;
        t = (t * 10) + 9;
        i++;
    }
    printf("The sum is : %d",sum);
    return 0;
}