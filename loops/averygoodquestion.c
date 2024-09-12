#include<stdio.h>
int main(){
    int number;
    int sum = 0;
    printf("Input integers  (-----ENTER 0 TO STOP------)  \n");
    
    while(1){ //we can use any integer number here
        printf("Input a number : ");
        scanf("%d",&number);
        if(number==0){
            break;
        }
        else{
            sum = sum + number;
           
        }
    }
    printf("SUM : %d",sum);
    return 0;
}