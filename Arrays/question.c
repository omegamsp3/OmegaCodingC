//Given array of marks of 10 students, if the mark of any student
//is less than 35 print its roll nbumber
//[roll number here refers to the index of the array]
#include<stdio.h>
int main(){
    int marks[10];
    int i;
    for( i = 0 ; i<=9 ; i++){
        printf("Enter marks of %d student : ",i+1);
        scanf("%d",&marks[i]);
    }
    
    for(i = 0 ; i<=9 ; i++){
         if(marks[i] < 35)
        printf("Roll number : %d \n",i);
    }
    return 0;
}
