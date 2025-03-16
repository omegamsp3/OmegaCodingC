#include<stdio.h>
int stw(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    if(n==3) return 3;
    return stw(n-1) + stw(n-2) + stw(n-3);
}
int main(){
    int n;
    printf("Enter number of steps : ");
    scanf("%d",&n);
    printf("No of ways : %d",stw(n));
    return 0;
}