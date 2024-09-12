#include <stdio.h>
void England(){
    printf("You are in England\n");
    return;
} 
void Australia(){
    printf("You are in Australia\n");
    England();
    return;
} 
void India(){
    printf("You are in India\n");
    Australia();
    return;
} 
int main(){
    India();

    return 0;
}
