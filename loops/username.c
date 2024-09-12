// Write a C program that prompts the user to input a username. 
// Use a while loop to keep asking for a username u
// ntil a valid one is entered (e.g., at least 8 characters long).

#include<stdio.h>
int main(){
    int n;
    while(1){
        printf("Enter Username : ");
        scanf("%d",&n);
    if(n==4567890){
        printf("WELCOME BACK");
        break;
    }
    else{
        printf("-----Username not valid-----\n");
    }
    }
    return 0;
}