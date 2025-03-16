#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, ld,count = 0;
    int sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Store the original number
    originalNum = num;

    // Calculate the number of digits
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        count++;
    }

    // Calculate the sum of each digit raised to the power of numDigits
    temp = num;
    while (temp != 0) {
        ld = temp % 10;
        sum = sum+ pow(ld, count);
        temp = temp /10;
    }

    // Check if the sum is equal to the original number
    if (sum == originalNum)
        printf("%d is an Armstrong number.\n", originalNum);
    else
        printf("%d is not an Armstrong number.\n", originalNum);

    return 0;
}