#include <stdio.h>

int main()
{
    char i = 'A';
    while(i<='Z' ){
        printf("%c ",i);
        i++;
    }

    return 0;
}
//agar mai %d daalta hu toh ASCII values aa jaayengi
//Aur agar mai %c dalta hu toh a to z print ho jayenge