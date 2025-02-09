#include <stdio.h>
#define PI 3.14159

double area_circle(double radius) {
    return PI * radius * radius;
}

double area_rectangle(double length, double width) {
    return length * width;
}

double area_square(double side) {
    return side * side;
}

int main() {
    int choice;
    printf("1. Circle\n2. Rectangle\n3. Square\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            double radius;
            printf("Enter radius: ");
            scanf("%lf", &radius);
            printf("Area of circle = %.2lf\n", area_circle(radius));
            break;

        case 2:
            double length, width;
            printf("Enter length and width: ");
            scanf("%lf %lf", &length, &width);
            printf("Area of rectangle = %.2lf\n", area_rectangle(length, width));
            break;

        case 3:
            double side;
            printf("Enter side: ");
            scanf("%lf", &side);
            printf("Area of square = %.2lf\n", area_square(side));
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
