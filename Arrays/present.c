/* Check whether the number is present in array or not.*/

#include<stdio.h>
int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int x = 4;
    for(int i = 0 ; i<7 ; i++){
        if(arr[i]==x){
            printf("%d is present in the array",x);
            printf("\nIndex is %d",i);
            break;
        }
    }
    return 0;
}