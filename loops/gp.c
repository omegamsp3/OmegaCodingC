#include<stdio.h>
int main()
{
    int n;
    printf("ENTER NUMBER : ");
    scanf("%d",&n);
    int a = 1;
    for(int i = 1; i<=n ; i++){
        printf("%d ",a);
        a = a * 2;
    }
    return 0;

}