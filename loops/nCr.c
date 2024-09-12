//print nCr using functions
#include<stdio.h>
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    int r;
    printf("Enter r : ");
    scanf("%d",&r);
    int nfact = 1; // n!
    int rfact = 1; // r!
    int nrfact = 1; // n-r!
    for(int i = 2 ; i<=n ; i++){
        nfact = nfact * i;
    }
    for(int k = 2 ; k<=r ; k++){
        rfact = rfact * k;
    }
    for(int l = 2 ; l<=n-r ; l++){
        nrfact = nrfact * l;
    }
    int nCr = nfact/(rfact * nrfact);
    printf("Answer : %d",nCr);
    return 0;
}