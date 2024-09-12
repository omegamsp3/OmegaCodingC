#include<stdio.h>
int main()
{
    int n;
    printf("Enter AGE : ");
    scanf("%d",&n);
    
    if(n>=0 && n<=12){
        printf("CHILD");
    }
    if(n>=13 && n<=19){
        printf("TEEN");
    }
    if(n>=20 && n<=64){
        printf("ADULT");
    }
    if(n>=65){
        printf("SENIOR");
    }
    return 0;
}
