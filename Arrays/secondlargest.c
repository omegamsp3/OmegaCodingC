#include<stdio.h>
#include<limits.h>
int main(){
    int arr[8] = {9,2,11,13,3,4,8,7};
    int max = INT_MIN; 
    int Smax = INT_MIN;
    for(int i = 0 ; i<=7 ; i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    for(int i = 0 ; i<=7 ; i++){
        if(arr[i]!=max && Smax<arr[i]){
            Smax = arr[i];
        }
    }
    printf(" Second max. number is : %d",Smax);
    return 0;
}