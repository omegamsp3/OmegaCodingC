#include <stdio.h>
#include <string.h>

typedef struct {
    int price;
    char publisher[20];
    int id;
    char name[20];
} mybook;

int main() {
    int n;
    printf("Enter number of books: ");  
    
    scanf("%d", &n);
    mybook x[n];
    
    for(int i = 0; i < n; i++) {
        
        printf("Enter price: ");
        scanf("%d", &x[i].price);
        
        printf("Enter publisher: ");
        scanf(" %[^\n]s", x[i].publisher);  
        
        printf("Enter id: ");
        scanf("%d", &x[i].id);
        
        printf("Enter name: ");
        scanf(" %[^\n]s", x[i].name);  
    }

    printf("\n\n");

    for(int i = 0; i < n; i++) {
        printf("Price: %d\n", x[i].price);
        printf("Publisher: %s\n", x[i].publisher);
        printf("ID: %d\n", x[i].id);
        printf("Name: %s\n", x[i].name);
    }
    
    return 0;
}
