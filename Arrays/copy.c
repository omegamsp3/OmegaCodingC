/* WAP to copy the contents of one array into another in reverse order. */

#include<Stdio.h>
int main(){
    int arr[5] = {1,2,3,4,5};
    int brr[5];
    for(int i = 0 ; i<5 ; i++){
        brr[i] = arr[4-i];
        printf("%d ",brr[i]);
    }
    
    return 0;
}