#include<stdio.h>
int main()
{
    float L;
    printf("The Length is : ");
    scanf("%f",&L);
    float B;
    printf("The Breadth is : ");
    scanf("%f",&B);
    float P = 2 * (L + B);
    printf(" The Perimeter is : %f",P);
    float A = L * B;
    printf("\n The Area is : %f",A);
    if(A>P){
        printf("\n The Area of Rectangle is Greater than Perimeter");
    }
    else{
        printf("\n The Area of Rectangle is not Greater than Perimeter");
    }
    return 0;
}