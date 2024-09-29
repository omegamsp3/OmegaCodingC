/* Count the given number of elements in given 
array greater than a given number x. */

#include<stdio.h>
int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int x;
    printf("Enter number : ");
    scanf("%d",&x);
    int count = 0;
    for(int i = 0 ; i<7 ; i++){
        if(arr[i]>x){
            count++;
        }
    }
    printf("Number greater than %d is/are %d ",x,count);
}