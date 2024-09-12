// Write a C program to check whether a given number is a 'Perfect' number or not.
// Test Data :
// Input the number : 56
// Expected Output :
// The positive divisor : 1 2 4 7 8 14 28
// The sum of the divisor is : 64
// So, the number is not perfect.

#include <stdio.h> 
int main(){
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    int sum = 0;
    int q;
    for(int i = 1 ; i<n ; i++){
        if(n%i==0){
            printf("%d ",i);
            sum = sum + i;
        } 
    }
    printf("\nSum : %d",sum);
     if(sum == n){
         printf("\n-------Perfect Number---------");
     }
     else{
         printf("\n------Not a perfect number-------");
     }
    
    return 0;
}
