#include<stdio.h>
int stw(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    return stw(n-1) + stw(n-2);
}
int main(){
    int n;
    printf("Enter number of steps : ");
    scanf("%d",&n);
    printf("No of ways : %d",stw(n));
    return 0;
}