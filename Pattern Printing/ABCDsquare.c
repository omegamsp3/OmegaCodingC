#include<stdio.h>
int main()
{
 char ch;
 printf("Enter character : ");
 scanf("%c",&ch);
 for(char i = 'A' ; i<=ch ; i++){
     for(char i = 'A' ; i<=ch ; i++){
         printf("%c ",i);
     }
     printf("\n");
 }
 return 0;
}