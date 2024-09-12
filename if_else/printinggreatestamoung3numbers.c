#include <stdio.h>
int main()
{
    int x;
    printf("Enter first number : ");
    scanf("%d", &x);
    int y;
    printf("Enter second number : ");
    scanf("%d", &y);
    int z;
    printf("Enter third number : ");
    scanf("%d", &z);
    if (x > y && x > z)
    {
        printf("First number is greatest");
    }
    if (y > x && y > z)
    {
        printf("The second number is greatest");
    }
    if (z > x && z > y)
    {
        printf("The Third number is greatest");
    }
    return 0;
}