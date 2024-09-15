#include<stdio.h>
int main(){
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    int factor = 1;
    printf("Factors of %d are : ",n);
    for(int i = 1 ; i<=n ; i++){
        factor = i;      
        if(n%i==0){           
            printf("%d ",factor);
        }
    }
    return 0;
}