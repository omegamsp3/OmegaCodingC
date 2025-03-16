#include<stdio.h>
int binarysearch(int arr[],int size,int element){
    int low,mid,high;
    low = 0;
    high = size-1;
    while(low<=high){
        mid = (low + high)/2;
        if(arr[mid] == element){
        return mid;
        }
        if(arr[mid]<element){
        low = mid + 1;
        }
        else{
        high = mid - 1;
        }
    }
    return -1;
}
int main(){
    int size,element;
    printf("Enter size of array : ");
    scanf("%d",&size);
    int arr[size]; 
    for(int i = 0 ; i<size ; i++){
        printf("Enter element of index %d : ",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter element to be searched : ");
    scanf("%d",&element);
    int index = (arr,size,element);
    printf("Element found at index : %d",index);
   
    return 0;
}