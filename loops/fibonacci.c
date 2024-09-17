
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
    printf("%d %d ",a,b);
    for(i=1; i<=n - 2; i++){
        sum = a + b;
        a=b;
        b=sum;   

        printf("%d ",sum);   
    }
    
    return 0;
}