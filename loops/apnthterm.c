
#include <stdio.h>

int main()
{
    int n;
    printf("ENTER NUMBER : ");
    scanf("%d",&n);
    for(int i=4;i<=3*n - 1;i=i+3){
        printf("%d ",i);
    }
    
    return 0;
}
