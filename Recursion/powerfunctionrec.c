//logarthmic method

#include<stdio.h>
int powerlog(int a,int b){
    if(b==0) return 1;
    int x = powerlog(a,b/2); // to avoid calling 2 times
    if(b%2==0) return x*x;
    else return x*x*a;
    
}
int main(){
    int a;
    printf("Enter the base: ");
    scanf("%d",&a);
    int b;
    printf("Enter the exponent: ");
    scanf("%d",&b);
    int p = powerlog(a,b);
    printf("%d^%d = %d",a,b,p);
    return 0;
}