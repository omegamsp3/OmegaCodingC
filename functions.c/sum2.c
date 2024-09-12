#include <stdio.h>
int add(int a,int b){
    return a+b;
}
int main(){
    int a;
    printf("Enter number : ");
    scanf("%d",&a);
    int b;
    printf("Enter number : ");
    scanf("%d",&b);
    int sum = add(a,b);
    printf("Sum : %d",sum);
    return 0;
    
    
}