#include<stdio.h>
int main(){
    float h;
    printf("Enter height in cm : ");
    scanf("%f",&h);
    float m;
    printf("Enter weight in kg : ");
    scanf("%f",&m);
    
    float BMI = (m * 100 * 100) / (h * h);
    printf("For height %f cm and weight %f kg the BMI index would be : %f",h,m,BMI);
    return 0;
}