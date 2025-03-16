// Using return type
#include<stdio.h>
int sum(int n){
    if(n==0) return 0;
    int recAns = n + sum(n-1);
    return recAns;
}
int main(){
    int n;
    printf("Enter nth number : ");
    scanf("%d",&n);
    int result= sum(n);
    printf("The sum is : %d",result);
    return 0;
}