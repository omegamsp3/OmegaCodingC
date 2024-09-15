//swap 2 numbers using pass by refrence
#include<stdio.h>
void swap(int* x,int* y){
    int temp;
    temp = *x; // temp = value of a
    *x = *y; // value of a = value of b
    *y = temp; // *y = value of temp --> value of b = value of temp which is the value of a
    return;
}
int main(){
    int a;
    printf("Enter a : ");
    scanf("%d",&a);
    int b;
    printf("Enter b : ");
    scanf("%d",&b);
    swap(&a,&b);
    printf("The value of a is %d\n",a);
    printf("The value of b is %d",b);
    return 0;
}