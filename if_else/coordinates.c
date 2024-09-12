#include <stdio.h>

int main() {
    int x, y;

    printf("Enter the coordinates : ");
    scanf("%d , %d", &x, &y);
    
    if (x > 0 && y > 0){
        printf("(X,Y) QUADRANT");
    }
    else if(x<0 && y>0){
        printf("(-X,Y) QUADRANT");
    }
     else if(x>0 && y<0){
        printf("(X,-Y) QUADRANT");
     }
      else if(x==0 && y==0){
        printf("ORIGIN");
      }
      else{
         printf("(-X,-Y) QUADRANT"); 
      }
    return 0;
}
