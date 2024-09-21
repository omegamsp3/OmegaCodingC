#include<stdio.h>
int main(){
    int arr[6] = {1,2,5,3,8,9};
    int product = 1;
    for(int i = 0 ; i<=5 ; i++){
        product = product * arr[i];
    }
    printf("%d",product);
    
    return 0;
}