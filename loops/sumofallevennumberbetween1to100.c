#include <stdio.h>

int main()
{
    int i;
    int sum;
    for(i=2;i<=100;i = i + 2){
       sum = sum + i;
    }
    printf("Sum is : %d",sum);
    return 0;
}
