//Solving pointer problem using typedef
#include<stdio.h>
typedef int* ptr;
int main(){
    int x = 5 , y = 7;
    ptr a = &x , b = &y;
    printf("%p\n",a);
    printf("%p\n",b);
    return 0;
}