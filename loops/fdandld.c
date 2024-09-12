
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
    printf("First Digit : %d",fd);
    printf("\nLast Digit : %d",ld);
    return 0;
}
