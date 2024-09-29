/* Find the diif b/w the sum of elements at even indeces to 
the sum of elements at odd indecies*/

#include<Stdio.h>
int main(){
    int arr[7] = {1,3,5,7,9,11,13};
    int sum_even = 0;
    int sum_odd = 0;
    for(int i = 0 ; i<7 ; i++){
        if(i%2==0){
            sum_even = sum_even + arr[i];
        }
        else{
            sum_odd = sum_odd + arr[i];
        }        
    }
    printf("Sum of elements in even indices : %d\n",sum_even);
    printf("Sum of elements in odd indices : %d\n",sum_odd);
    int diff = sum_even - sum_odd;
    printf("DIFFERENCE : %d\n",diff);
    return 0;
}