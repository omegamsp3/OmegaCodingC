#include <stdio.h>

int main() {
    int a, b, c;

    // Input three sides
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Check if the sides can form a valid triangle
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        // Check the type of triangle
        if (a == b && b == c) {
            printf("The numbers form an equilateral triangle.\n");
        } else if (a == b || b == c || a == c) {
            printf("The numbers form an isosceles triangle.\n");
        } else {
            printf("The numbers form a scalene triangle.\n");
        }
    } else {
        printf("The numbers do not form a valid triangle.\n");
    }

    return 0;
}
