//Write a program that calculates the total marks and percentage of five subjects entered by the
//user and determines the grade based on the percentage.

#include<stdio.h>
int main(){
    float m1,m2,m3,m4,m5;
    printf("Enter Maths Marks : ");
    scanf("%f",&m1);
    printf("Enter Physics Marks : ");
    scanf("%f",&m2);
    printf("Enter Chemistry Marks : ");
    scanf("%f",&m3);
    printf("Enter English Marks : ");
    scanf("%f",&m4);
    printf("Enter 5th Subject Marks : ");
    scanf("%f",&m5);
    char grade;
    float percentage;
    percentage = (m1+m2+m3+m4+m5) / 5;
    printf("\nPercentage = %f",percentage);
    
    if(percentage>=90 && percentage<=100){
        grade = 'A';
        printf("\nGrade = %c",grade);
    }
    else if(percentage>=80 && percentage<90){
        grade = 'B';
        printf("\nGrade = %c",grade);
    }
    else if(percentage>=70 && percentage<80){
        grade = 'C';
        printf("\nGrade = %c",grade);
    }
    else if(percentage>=60 && percentage<70){
        grade = 'D';
        printf("\nGrade = %c",grade);
    }
    else if(percentage>=50 && percentage<60){
        grade = 'E';
        printf("\nGrade = %c",grade);
    }
    else if(percentage>=40 && percentage<50){
        grade = 'F';
        printf("\nGrade = %c",grade);
    }
    else if(percentage>=33 && percentage<40){
        grade = 'G';
        printf("\nGrade = %c",grade);
    }
    else{
        printf("\nFAIL");
    }
    return 0;
}