#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    int ids[n];
    float salaries[n];
    

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &ids[i]);
        printf("Salary: ");
        scanf("%f", &salaries[i]);
    }


    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (salaries[j] > salaries[j + 1]) {
              
                float tempSalary = salaries[j];
                salaries[j] = salaries[j + 1];
                salaries[j + 1] = tempSalary;
                
                
                int tempId = ids[j];
                ids[j] = ids[j + 1];
                ids[j + 1] = tempId;
            }
        }
    }


    printf("\nEmployees sorted by salary in ascending order:\n");
    printf("Employee ID\tSalary\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t\t%.2f\n", ids[i], salaries[i]);
    }

    return 0;
}
