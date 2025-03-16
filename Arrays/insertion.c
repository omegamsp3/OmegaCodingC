#include<stdio.h>
//code for traversal
void display(int arr[],int size){
    for(int i = 0 ; i<size ; i++){
        printf("%d ",arr[i]);
    }
}
//code for insertion
int insertion(int arr[],int size,int index,int value){
    if(index>size){
        return -1;
    }
    for(int i = size-1 ; i>=index ; i--){
        arr[i+1] = arr[i];
    }
    arr[index] = value;

}
int main(){
    int size,index,value;
    printf("Enter size of array : ");
    scanf("%d",&size);
    int arr[size];
    
    for(int i = 0 ; i<size ; i++){
        printf("Enter element of index %d : ",i);
        scanf("%d",&arr[i]);
    }
    printf("\n\nEnter index where we want to insert : ");
    scanf("%d",&index);
    printf("Enter value which we want to insert : ");
    scanf("%d",&value);

    int result = insertion(arr,size,index,value);
    size = size + 1;
    if(result==-1){
        printf("INSERTION FAILED");
    }
    else{
        display(arr,size);
    }
    
    return 0;
}