#include <stdio.h>
#include <string.h>


typedef struct {
    char city[50];
    char state[50];
    char zipCode[10];
} Address;


typedef struct {
    int id;
    char name[50];
    int age;
    Address address; 
} Employee;

int main() {
    int n;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    Employee employees[n];

   
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Employee %d:\n", i++);
       
        printf("ID: ");
        scanf("%d", &employees[i].id);
       
        printf("Name: ");
        scanf(" %[^\n]s", employees[i].name);
       
        printf("Age: ");
        scanf("%d", &employees[i].age);

        printf("City: ");
        scanf(" %[^\n]s", employees[i].address.city);  

        printf("State: ");
        scanf(" %[^\n]s", employees[i].address.state);

        printf("Zip Code: ");
        scanf(" %[^\n]s", employees[i].address.zipCode);
    }


    printf("\n\nEmployee Details:\n");
    for (int i = 0; i < n; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("ID: %d\n", employees[i].id);
        printf("Name: %s\n", employees[i].name);
        printf("Age: %d\n", employees[i].age);
        printf("Address:\n");
        printf("  City: %s\n", employees[i].address.city);
        printf("  State: %s\n", employees[i].address.state);
        printf("  Zip Code: %s\n", employees[i].address.zipCode);
    }

    return 0;
}
