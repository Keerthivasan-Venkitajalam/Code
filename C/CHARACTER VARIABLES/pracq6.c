#include <stdio.h>

int main() {
    float len, breadth, area;

    printf("Enter the length of the rectangle: ");
    scanf("%f", &len);

    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);
    area = len * breadth;

    
    printf("The area of the rectangle is %f\n", area);

    return 0;
}