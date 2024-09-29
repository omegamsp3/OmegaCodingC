#include<stdio.h>
int main(){
    int arr[8] = {9,2,11,13,3,4,8,7};
    int max = arr[0];
    for(int i = 0 ; i<=7 ; i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    printf("Printf max. number is : %d",max);
    return 0;
}