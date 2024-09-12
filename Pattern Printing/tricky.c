#include <stdio.h>

int main() {
    int i, j;
    char ch;
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    // First part: Number pattern and alphabet pattern alternately
    for (i = 1; i <= n; i++) {
        // For odd rows, print numbers
        if (i % 2 != 0) {
            for (j = 1; j <= i; j++) {
                printf("%d ", j);
            }
        } 
        // For even rows, print alphabets
        else {
            ch = 'A';
            for (j = 1; j <= i; j++) {
                printf("%c ", ch);
                ch++;
            }
        }
        printf("\n");
    }

    return 0;
}
