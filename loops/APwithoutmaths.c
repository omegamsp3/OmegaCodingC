
#include <stdio.h>

int main()
{
    int n; // itni baar loop chalega
    printf("ENTER NUMBER : ");
    scanf("%d",&n);
    //4 7 10 13 16 .... upto n number of terms
    //we are going to use extra variable
    int a = 4;
    for(int i=1;i<=n;i++){
        
        printf("%d ",a);
        a = a + 3;
    }
    
    return 0;
}
