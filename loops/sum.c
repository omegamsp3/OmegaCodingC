// Write a program in C to find the number and sum of all integers between 100 and 200 which are divisible by 9.
// Expected Output :
// Numbers between 100 and 200, divisible by 9 :
// 108 117 126 135 144 153 162 171 180 189 198
// The sum : 1683

#include <stdio.h>

int main()
{
    int i;
    int sum = 0;
    printf("Numbers between 100 and 200, divisible by 9 :\n");
   for(i = 108 ; i<=200 ; i++){
       if(i%9==0){
           printf("%d ",i);
           sum = sum + i;
           
       }
   }
       printf("\nSum : %d",sum);
    return 0;
}