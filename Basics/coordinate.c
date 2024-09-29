#include<stdio.h>
#include<math.h>
int main(){
    int x1,x2,y1,y2;
    printf("Enter x1 : ");
    scanf("%d",&x1);
     printf("Enter x2 : ");
    scanf("%d",&x2);
     printf("Enter y1 : ");
    scanf("%d",&y1);
     printf("Enter y2 : ");
    scanf("%d",&y2);
    
    float Dist = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    
    printf("Distance of points (%d,%d) & (%d,%d) is : %f",x1,y1,x2,y2,Dist);
    return 0;
}