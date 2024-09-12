#include<stdio.h>
int main()
{
    int n;
    printf("Enter rows: ");
    scanf("%d",&n);
    int m;
    printf("Enter Colums : ");
    scanf("%d",&m);
  for(int i = 1 ; i <= n ; i++){
     for(int j = 1 ; j <= m ; j++){
         if(i==1 || j==1 ){
        printf("*");}else if(i==n || j==m){printf("*");}  
        else{
            printf(" ");
        }
    }
     printf("\n");
  }
    return 0;
}
