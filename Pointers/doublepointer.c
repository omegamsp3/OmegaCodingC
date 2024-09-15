#include<stdio.h>
int main(){
int a = 25;
int* x = &a;// int * --> stores address of int
int** y = &x; // int ** --> address of int* stores in it
printf("%p\n",&x);
printf("%p\n",y);
return 0;
}