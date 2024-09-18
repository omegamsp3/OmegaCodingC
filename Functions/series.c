#include<stdio.h>
int factorial(int x){
    int fact = 1;
    for(int i = 2 ; i<=x ; i++){
        fact = fact*i;
    }
    return fact;
}

int main(){
    int n;
    printf("Enter nth term : ");
    scanf("%d",&n);
    int sum = 0;
    for(int i = 1 ; i<=n ; i++){
        sum = sum + (factorial(i)/i);
    }
        printf("Sum is : %d",sum);
    return 0;
}