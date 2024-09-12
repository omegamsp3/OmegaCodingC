#include <stdio.h>
int main()
{
    int x1;
    printf("Enter x1 : ");
    scanf("%d", &x1);
    int y1;
    printf("Enter y1 : ");
    scanf("%d", &y1);
    int x2;
    printf("Enter x2 : ");
    scanf("%d", &x2);
    int y2;
    printf("Enter y2 : ");
    scanf("%d", &y2);
    int x3;
    printf("Enter x3 : ");
    scanf("%d", &x3);
    int y3;
    printf("Enter y3 : ");
    scanf("%d", &y3);
    if ((y2 - y1) / (x2 - x1) == (y3 - y2) / (x3 - x2))
    {
        printf("All points falls on straight line");
    }
    else if ((y3 - y1) / (x3 - x1) == (y2 - y1) / (x2 - x1))
    {
        printf("All points falls on straight line");
    }
    else
    {
        printf("Points does not lie on a straight line");
    }
    return 0;
}