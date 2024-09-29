/* Given an array containing elements from 1 to 100 except one element in this range is missing.
Find the missing element.*/

#include<stdio.h>
int main(){
    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter numbers : ");
    for(int i = 0; i<n ; i++)
    {
        scanf("%d",&arr[i]);
        
    }
    int sum = 0;
    int sum2 = (n+1) * ((n+1)+arr[0])/2;
    for(int i = 0; i<n ; i++){
        sum = sum + arr[i];
    }
    int x = sum2 - sum;
    printf("The missing number is : %d",x);
     return 0;
}