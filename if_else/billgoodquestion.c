// Write a program in C to calculate and print the electricity bill of a given customer. 
//The customer ID, name, and unit consumed by the user should be captured from the keyboard to display the total amount to be paid to the customer.

//The charge are as follow :

//Unit	Charge/unit
//upto 199	@1.20
//200 and above but less than 400	@1.50
//400 and above but less than 600	@1.80
//600 and above	@2.00
//If bill exceeds Rs. 400 then a surcharge of 15% will be charged and the minimum bill should be of Rs. 100/-


#include<stdio.h>
int main()
{
    printf("CUSTOMER IDNO : 5900163626\n");
    printf("CUSTOMER NAME : KUMAR JI\n");
    int unit;
    printf("UNIT CONSUMED : ");
    scanf("%d",&unit);
    float bill;
    
    if(unit>=84 && unit<=199){
         bill = unit * 1.20;
        printf("AMOUNT CHARGES : %f",bill);
    }
    else if(unit>=200 && unit<=266){
         bill = unit * 1.50;
        printf("AMOUNT CHARGES : %f",bill);
    }
    else if(unit>266 && unit<=400){
        bill = unit * 1.50 * 15/100 + unit * 1.50;
        printf("AMOUNT CHARGES : %f",bill);
    }
    else if(unit>400 && unit<600){
        bill = unit * 1.80 * 15/100 + unit * 1.80;
        printf("AMOUNT CHARGES : %f",bill);
    }
    else{
         bill = unit * 2.00 * 15/100 + unit * 2.00;
        printf("AMOUNT CHARGES : %f",bill);
    }
    
    return 0;
}
   