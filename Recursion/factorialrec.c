#include<stdio.h>
int fact(int n){
    if(n==0){
    return 1; // BASE CASE
    }
    int recAns = n*fact(n-1);
    return recAns;
}
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int factorial = fact(n);
    printf("The factorial is : %d",factorial);
    return 0;
}