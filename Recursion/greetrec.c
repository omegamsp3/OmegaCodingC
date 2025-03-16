#include<stdio.h>
void greet(int n){    
    if(n==0){
        return;
    }
    printf("Good Morning\n");
    greet(n-1);
    return;
}
int main(){
    int n;
    printf("Enter the nth number : ");
    scanf("%d",&n);
    greet(n);
    return 0;
}