// C program to convert binary to decimal 
#include <stdio.h> 
  
// Function to convert binary to decimal 
int binaryToDecimal(int n) 
{ 
    int num = n; 
    int dec_value = 0; 
  
    // Initializing base value to 1, i.e 2^0 
    int base = 1; 
  
    int temp = num; 
    // Extracting the last digit of the binary number 
    while (temp) { 
        int last_digit = temp % 10; 
        // Removing the last digit from the binary number 
        temp = temp / 10; 
  
        // Multiplying the last digit with the base value 
        // and adding it to the decimal value 
        dec_value += last_digit * base; 
  
        // Updating the base value by multiplying it by 2 
        base = base * 2; 
    } 
  
    // Returning the decimal value 
    return dec_value; 
} 
  
// Driver program 
int main() 
{ 
    int num = 10101001; 
    printf("%d", binaryToDecimal(num)); 
}