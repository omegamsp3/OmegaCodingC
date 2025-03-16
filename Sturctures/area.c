#include <stdio.h>


typedef struct {
    float length;
    float width;
} Rectangle;


float Area(Rectangle rect) {
    return rect.length * rect.width;
}

int main() {
    Rectangle rect;

    printf("Enter the length of the rectangle: ");
    scanf("%f", &rect.length);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &rect.width);

    
    float area = Area(rect);
    printf("The area of the rectangle is: %.2f\n", area);

    return 0;
}
