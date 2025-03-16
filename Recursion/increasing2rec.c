// Using recursive call 
#include<stdio.h>
void inc(int n){
    if(n==0) return; // base code   
    inc(n-1); // call
    printf("%d ",n);// code
    return;
}
int main(){
    int n;
    printf("Enter the nth number : ");
    scanf("%d",&n);
    inc(n);

}