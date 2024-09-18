#include<stdio.h>
void odd_even(num){
    if(num%2==0){
        printf("%d is even",num);
    }
    else{
        printf("%d is odd",num);
    }
}

int main(){
    int num;
    printf("Enter number : ");
    scanf("%d",&num);
    odd_even(num);
    return 0;
}    