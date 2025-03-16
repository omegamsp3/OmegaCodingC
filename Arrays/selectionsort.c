//Selection sort

#include <stdio.h>

void selectionSort(int arr[], int n) {
    int i, j, min_idx, temp;
    for (i = 0; i < n-1; i++) {
        min_idx = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

int main(){
    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i<n ; i++){
        printf("Enter element of index %d : ",i);
        scanf("%d",&arr[i]);
    }
    
    selectionSort(arr,n);
    for(int i = 0 ; i<n ; i++){
        printf("%d ",arr[i]);
    }
}