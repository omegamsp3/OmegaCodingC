#include <stdio.h>

int main() {
    int decimal, remainder;
    int binary = 0;
    int place = 1;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    while (decimal > 0) {
        remainder = decimal % 2;      
        binary = binary + (remainder * place);  
        decimal = decimal / 2;                 
        place = place * 10; 
    }
    
    printf("Binary equivalent: %d\n", binary);
    return 0;
}
