//  Write a C program that displays the n terms of square natural numbers and their sum.
// 1 4 9 16 ... n Terms
// Test Data :
// Input the number of terms : 5
// Expected Output :
// The square natural upto 5 terms are :1 4 9 16 25
// The Sum of Square Natural Number upto 5 terms = 55

#include <stdio.h> 
int main(){
    int n;
    printf("Enter number of terms : ");
    scanf("%d",&n);
    int i;
    int q;
    int sum = 0;
    printf("The square of numbers: ");
    for(i = 1 ;i<=n ; i++){
         q = i*i;
        sum = sum + q;
        
        printf("%d ",q);
       
    }
    printf("\n\nSum : %d",sum);
    return 0;
}
