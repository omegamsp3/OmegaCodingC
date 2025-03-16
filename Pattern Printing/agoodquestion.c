/*
1
AB
123
ABCD
12345  
*/

#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
       int a = 1;
        for (int j = 1; j <= i; j++) {
            if (i % 2 == 0) {
                int d = a + 64;
                char ch = (char)d; 
                printf("%c", ch);
            } else {
                printf("%d", j);
            }
            a++;
        }
        printf("\n");
    }
    return 0;
}
