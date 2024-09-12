#include<stdio.h>
int main(){
    int n = 0;
    printf("ENTER NUMBER : ");
    scanf("%d",&n);
    int count = 0;
    while(n!=0){
        n = n/10;
        count++;
    }
    printf("THE NO. OF DIGITS ARE %d",count);
    return 0;
}
