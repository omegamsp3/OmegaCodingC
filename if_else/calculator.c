#include <stdio.h>

int main() {
    int num1, num2;
    char operator;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    if (operator == '+') {
        printf("%d + %d = %d\n", num1, num2, num1 + num2);
    } else if (operator == '-') {
        printf("%d - %d = %d\n", num1, num2, num1 - num2);
    } else if (operator == '*') {
        printf("%d * %d = %d\n", num1, num2, num1 * num2);
    } else if (operator == '/') {
        if (num2 != 0) {
            printf("%d / %d = %d\n", num1, num2, num1 / num2);
        } else {
            printf("Division by zero is not allowed.\n");
        }
    } else {
        printf("Invalid operator.\n");
    }

    return 0;
}
