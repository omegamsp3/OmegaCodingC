#include <stdio.h>
#include <string.h>


typedef struct {
    char name[50];
    char grade;
} Student;

int main() {
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n); 
   
    Student students[n];


    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);


        printf("Name: ");
        scanf(" %[^\n]s", students[i].name);

     
        printf("Grade: ");
        scanf(" %c", &students[i].grade);
    }


    int MAX = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].grade > students[MAX].grade) {
            MAX = i;
        }
    }

    printf("\nStudent with the highest grade:\n");
    printf("Name: %s\n", students[MAX].name);
    printf("Grade: %c\n", students[MAX].grade);

    return 0;
}
