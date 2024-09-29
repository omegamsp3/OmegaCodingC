#include <stdio.h>
#include<math.h>
int main(){
    int a;
    printf("Enter number : ");
    scanf("%d",&a);
    int b;
    printf("Enter exponent : ");
    scanf("%d",&b);
    int power = pow(a,b);
    printf("The result is : %d",power);
    return 0;
}