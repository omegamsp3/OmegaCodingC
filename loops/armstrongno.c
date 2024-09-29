#include<math.h>
#include<stdio.h>
int main(){
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    int ld;
    int LD = n%10;
    int power;
    int sum = 0;
    int m = n;
     while(m!=0){
         ld = m % 10;
         m = m/10;
         sum = sum + pow(ld,LD);
     }
    if(sum==n){
        printf("%d is an ARMSTRONG NUMBER",n);
    }
    else{
        printf("%d is not an ARMSTRONG NUMBER",n);
    }
     
    return 0;
}
//VS code has a glitch in giving us output for power of 5. It is giving one number less than original result.