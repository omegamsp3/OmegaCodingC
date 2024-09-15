#include<stdio.h>
int add(int x, int y){
    return x + y;
}
int main(){
    int x,y;
    printf("Enter 1st number : ");
    scanf("%d",&x);
    printf("Enter 2nd number : ");
    scanf("%d",&y);
    int sum = add(x,y);
    printf("Sum: %d",sum);
 
    return 0;
}