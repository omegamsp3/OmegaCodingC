#include<stdio.h>

int linearSearch(int arr[],int size,int s){
    for(int i = 0 ; i<size ; i++){
        if(arr[i]==s){
            return i;
        }
    }
    return -1;
}
int main(){
    int size,s;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    int arr[size];
    for(int i = 0 ; i<size ; i++){
        printf("Enter element in index %d : ",i);
        scanf("%d",&arr[i]);
    }
    printf("\nEnter the element to be searched : ");
    scanf("%d",&s);
    int result = linearSearch(arr,size,s);
    if(result!=-1){
        printf("Element found in index : %d",result);
    }
    else{
        printf("Element not found");
    }
    return 0;
}