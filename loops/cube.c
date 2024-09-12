#include<stdio.h>
#include<math.h>
int main(){
    int p;
    for(int i = 2 ; i<=20 ; i = i+2){
        p = pow(i,3);
        printf("Number is : %d\t  ",i);
        printf("Cube is : %d\n",p);
    }
    return 0;
}