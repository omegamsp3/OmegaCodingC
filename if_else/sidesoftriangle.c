#include <stdio.h>
int main()
{
    int a, b, c;
    printf("The first side  : ");
    scanf("%d", &a);
    printf("The second side  : ");
    scanf("%d", &b);
    printf("The third side  : ");
    scanf("%d", &c);
    if (a + b > c && b + c > a && c + a > b)
    {
        printf("They forms a triangle");
    }
    else
    {
        printf("They do not form a triangle");
    }
    return 0;
}