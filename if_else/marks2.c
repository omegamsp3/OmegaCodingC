#include <stdio.h>
int main()
{
    int marks;
    printf("Enter Marks : ");
    scanf("%d", &marks);
    if (marks >= 90 && marks <= 100)
    {
        printf("EXCELLENT");
    }
    else if (marks >= 80 && marks <= 89)
    {
        printf("VERY GOOD");
    }
    else if (marks >= 70 && marks <= 79)
    {
        printf("GOOD");
    }
    else if (marks >= 60 && marks <= 69)
    {
        printf("CAN DO BETTER");
    }
    else if (marks >= 50 && marks <= 59)
    {
        printf("AVERAGE");
    }
    else if (marks >= 40 && marks <= 49)
    {
        printf("BELOW AVERAGE");
    }
    else
    {
        printf("FAIL");
    }

    return 0;
}