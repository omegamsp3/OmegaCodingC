#include<stdio.h>
    int gcd(int a , int b){
        while(b!=0){
            int temp = b;
            b = a % b;
            a = temp;
        }
    }

    int lcm(int a , int b){
        int gcd_value = gcd(a,b);
        int result = (a*b) / gcd_value;
    }

    int main(){
        int a,b;
        printf("Enter two numbers : ");
        scanf("%d %d",&a,&b);

        int GCD = gcd(a,b);
        int LCM = lcm(a,b);

        printf("The GCD of %d and %d is : %d\n",a,b,GCD);
        printf("The LCM of %d and %d is : %d",a,b,LCM);
    return 0;
}