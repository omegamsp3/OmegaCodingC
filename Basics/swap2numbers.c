//swap 2 numbers 
//this question is asked in many placement interviews
#include<stdio.h>
int main(){
    int a,b,temp;
    printf("Enter a and b : ");
    scanf("%d %d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("a : %d , b : %d",a,b);
    return 0;
}

