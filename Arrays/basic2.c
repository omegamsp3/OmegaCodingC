#include<stdio.h>
int main(){
    int arr[5] = {2,4,6,8,1};
    arr[4] = 100; //{2,4,6,8,100}
    arr[1] = 1; //{2,1,6,8,100}
    printf("%d",arr[4]); 

    return 0;
}