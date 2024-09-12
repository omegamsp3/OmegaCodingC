#include<stdio.h>
int main()
{
    int n;
    
    printf("Enter the Year :");
    scanf("%d",&n);
    if(n % 4 == 0){
        printf("The Year Is Leap Year");
    }
    else{
        printf("The Year is not Leap Year");
    }
    return 0;
}
