#include<stdio.h>
int sq(int a){
    return a*a;
}
int main(){
    int a;
    printf("Enter number : ");
    scanf("%d",&a);
    int result = sq(a);
    printf("The square of %d is : %d\n",a,result);
    return 0;
}