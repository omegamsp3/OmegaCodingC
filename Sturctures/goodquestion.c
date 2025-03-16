//  A record contains name of cricketer, his age, number of test matches that he has played and the average runs that he 
//  has scored in each test match. 
//  Create an array of structure to hold records of 20 such cricketer and then write a program to read these records.

#include<stdio.h>
typedef struct Cricketer{
    char name[20];
    int age;
    int test_matches;
    float average;
}cricketer;

cricketer arr[3];

int main(){
    for(int i = 0 ; i<3 ; i++){
        printf("Enter name : ");
        scanf(" %[^\n]s",arr[i].name);
        printf("Enter age : ");
        scanf("%d",&arr[i].age);
        printf("Enter no. of test matches : ");
        scanf("%d",&arr[i].test_matches);
        printf("Enter average : ");
        scanf("%f",&arr[i].average);
    }
    printf("\n\n\n");
    for(int i = 0 ; i<3 ; i++){
        printf("Name : %s\t\t",arr[i].name);
        printf("Age : %d\t\t",arr[i].age);
        printf("No.of test matches : %d\t\t",arr[i].test_matches);
        printf("Average : %f\t\t",arr[i].average);
        printf("\n");
    }


    return 0;
}