#include<stdio.h>

int deletion(int arr[],int size,int index){
    for(int i = index ; i<size-1 ; i++){
          arr[i] = arr[i+1];
    }
}
int main(){
    int size,index,value;
    printf("Enter size of array : ");
    scanf("%d",&size);
    int arr[size];
    for(int i = 0 ; i<size ; i++){
        printf("Enter the element of index %d : ",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter the index we want to delete : ");
    scanf("%d",&index);
    int result = deletion(arr,size,index);
    size = size-1;

    for(int i = 0 ; i<size ; i++){
        printf("\n%d",arr[i]);
    }
    return 0;
}