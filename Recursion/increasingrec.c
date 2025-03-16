#include<stdio.h>
void inc(int i,int n){    // using extra parameter.
    if(i>n){
        return;
    }
    printf("%d ",i);
    inc(i+1,n);
    return;
}
int main(){
    int n;
    printf("Enter the nth number : ");
    scanf("%d",&n);
    inc(1,n);
    return 0;
}