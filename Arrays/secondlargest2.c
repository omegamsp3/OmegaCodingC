//Earlier we have done this code using loops step by step
//can we do it in one loop only??
//lets test it

#include<stdio.h>
#include<limits.h>
int main(){
    int arr[8] = {9,2,11,13,3,4,8,7};
    int max = INT_MIN; 
    int Smax = INT_MIN;
    for(int i = 0 ; i<=7 ; i++){
        if(max<arr[i]){
            Smax = max; // smax is previous max
            max = arr[i]; // max is now new max
        }
    }    
    printf(" Second max. number is : %d",Smax);
    return 0;
}