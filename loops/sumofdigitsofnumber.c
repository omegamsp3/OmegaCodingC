#include<stdio.h>
int main(){
    int n;
    printf("ENTER NUMBER : ");
    scanf("%d",&n);
    int sum = 0;
    int ld = 0;
    while(n!=0){
        ld = n % 10;
        sum = sum + ld;
        n = n/10;
    }
    printf("THE SUM OF DIGITS IS = %d",sum);
    return 0;

}