/**
 * C program to find first digit of a number 
 */

#include <stdio.h>

int main()
{
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);
    int fd = n;
    while(fd>=10){
        fd = fd / 10;
       
    }
     
     int ld;
    while(n!=0){
        ld = n % 10;
        
        break;
    }
    
    printf("Last Digit : %d",fd);
    printf("\nFirst Digit : %d",ld);
    return 0;
}
