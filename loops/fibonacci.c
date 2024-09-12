
#include <stdio.h>

int main()
{
    int n;
    printf("Enter nth Term : ");
    scanf("%d",&n);
    int a;
    int b;
    printf("Enter a : ");
    scanf("%d",&a);
    printf("Enter b : ");
    scanf("%d",&b);
    int sum = 0;
    int i;
    for(i=1; i<=n - 2; i++){
        sum = a + b;
        a=b;
        b=sum;
        
    }
    printf("Fibonacci series : %d",sum);
    return 0;
}