#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    gets(str); //entire sentence can be input
    printf("Your input is : %s",str);
    return 0;
}