#include<stdio.h>
#include<string.h>
int main(){
    char str[] = "Hello World";
    char* ptr = str; // ptrnow points to first element
   int i =0;
   while(*ptr!=0){
    printf("%c",*ptr);
    ptr++;
    i++;
   }
    return 0;
}