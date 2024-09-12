#include<stdio.h>
int main()
{
 char ch;
 printf("Enter character : ");
 scanf("%c",&ch);
 for(char i = 'A' ; i<=ch ; i++){
     for(char j = 'A' ; j<=i ; j++){
         printf("%c",j);
     }
     printf("\n");
 }
 return 0;
}