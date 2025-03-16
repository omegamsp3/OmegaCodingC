/* Another way to take input */
#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    scanf("%[^\n]s",str); // we don't use & in string input
    return 0;
}