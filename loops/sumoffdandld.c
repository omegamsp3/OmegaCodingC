
#include <stdio.h>

int main()
{
    int n;
    int sum;
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
    sum = ld + fd;
    printf("Sum : %d",sum);
    return 0;
}
