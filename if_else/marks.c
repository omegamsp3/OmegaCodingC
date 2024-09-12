// Write a C program that takes a student's marks as input and prints their grade based on the following criteria:
// Marks >= 90: Grade A
// Marks >= 80 and < 90: Grade B
// Marks >= 70 and < 80: Grade C
// Marks >= 60 and < 70: Grade D
// Marks < 60: Grade F

#include <stdio.h>

int main()
{
    int marks;
    char grade;

    printf("Enter the student's marks: ");
    scanf("%d", &marks);

    if (marks >= 90)
    {
        grade = 'A';
    }
    if (marks >= 80 && marks < 90)
    {
        grade = 'B';
    }
    if (marks >= 70 && marks < 80)
    {
        grade = 'C';
    }
    if (marks >= 60 && marks < 70)
    {
        grade = 'D';
    }
    if (marks < 60)
    {
        grade = 'E';
    }

    printf("The student's grade is: %c\n", grade);

    return 0;
}
