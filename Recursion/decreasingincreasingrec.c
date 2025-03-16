#include<stdio.h>
void dec_inc(int n){
    if(n==0) return; // base code   
    printf("%d ",n);// code
    dec_inc(n-1); // call
    printf("%d ",n);// code
    return;
}
int main(){
    int n;
    printf("Enter the nth number : ");
    scanf("%d",&n);
    dec_inc(n);

}