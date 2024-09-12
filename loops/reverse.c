//WAP to print reverse of a given number
#include<stdio.h>
int main()
{
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);
    int r = 0;
    while(n>0){
        r = r * 10; 
        r = r + (n%10);
        n = n / 10;
    }
    
     printf("THE REVERSE NUMBER IS : %d",r);
    return 0;
   
}