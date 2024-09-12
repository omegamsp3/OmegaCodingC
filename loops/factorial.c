#include <stdio.h>

int main()
{
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);
    int fact = 1;
    int i;
    for(i=1;i<=n;i++)
    {
        fact = fact * i;
        
    }
    printf("Factorial : %d",fact);
    return 0;
}