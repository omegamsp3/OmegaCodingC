#include<stdio.h>
int main(){
int a = 25;
int *x;
x = &a;
printf("%p\n",&a);
printf("%p\n",x);

return 0;
}