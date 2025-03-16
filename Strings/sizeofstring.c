#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    puts("Enter the string");
    scanf("%[^\n]s",str);
    puts("The size of string  is : ");// puts automatically gives a \n
    int size = 0;
    int i = 0;
    while(str[i]!='\0'){
        size++;
        i++;
    }
    printf("%d",size);
    return 0;
}