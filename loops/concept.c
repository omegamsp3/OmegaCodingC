#include<stdio.h>
int main(){
    int i = 1;
    int product = 1;
    while(i<=5){
        product = product * i;
         printf("Current number : %d\t",i);
         printf("Current Product : %d\n",product);
        i++;
       
    }
   
    return 0;
}