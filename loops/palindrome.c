
#include<stdio.h>
int main()
{
    int n,on; // we have taken an extra variable on (Original number).
    printf("Enter Number : ");
    scanf("%d",&n);
    on=n;
    int r = 0;
    while(n>0){
        r = r * 10; 
        r = r + (n%10);
        n = n / 10;
    }
    if(on==r){
        printf("Palindrome"); //contd.. becz if we will take n==r then the value of n is changing everytime so we have to assume on = n.
    }
    else{
        printf("Not a Palindrome");
        
    }
    
    return 0;
   
}