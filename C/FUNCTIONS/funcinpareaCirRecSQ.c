//Write a C program to take input of a CIRCLE/RECTANGLE/SQUARE. CALCULATE the area of the same.(USE SWITCH CASES AND USER DEFINED FUNCTIONS)
#include <stdio.h>
#include <math.h>

float circleArea(float radius) {
    return __PIC__ * radius * radius;
}


float rectangleArea(float length, float width) {
    return length * width;
}


float squareArea(float side) {
    return side * side;
}

int main() {
    int choice;
    printf("1. Circle\n2. Rectangle\n3. Square\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            float radius;
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            printf("Area of the circle is: %f\n", circleArea(radius));
            break;
        case 2:
            float length, width;
            printf("Enter the length and width of the rectangle: ");
            scanf("%f %f", &length, &width);
            printf("Area of the rectangle is: %f\n", rectangleArea(length, width));
            break;
        case 3:
            float side;
            printf("Enter the side of the square: ");
            scanf("%f", &side);
            printf("Area of the square is: %f\n", squareArea(side));
            break;
        default:
            printf("Invalid\n");
    }

    return 0;
}
