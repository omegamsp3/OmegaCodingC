/* Given array of integers, change the value of all 
indexed elements to its second multiple and incremenmt 
all even indexes value by 10.*/

#include<stdio.h>
int main(){
    int arr[8] = {1,2,3,4,5,6,7,8};
    printf("\n");
    for(int i = 0 ; i<8 ; i++){
        if(i%2==0){
            arr[i] = arr[i] + 10;
        }
        else{
            arr[i] = arr[i] * 2;
        }
        printf("%d ",arr[i]);
    }
    
    return 0;
}