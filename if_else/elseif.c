//Profit Loss same code
#include <stdio.h>
int main()
{
    float CP;
    printf("The CP is :");
    scanf("%f", &CP);
    float SP;
    printf("The SP is :");
    scanf("%f", &SP);
    if (SP > CP)
    {
        printf("There will be Profit of \n");
        float P = SP - CP;
        printf("%f", P);
    }
    else if(CP>SP){
        printf("There will be Loss of \n");
        float L = CP - SP;
        printf("%f",L);
    }
    else{
        printf("There will be no loss no profit");
    }
    return 0;
}