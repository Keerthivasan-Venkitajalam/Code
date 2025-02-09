//C program to input all sides and angles of a triangle and check whether the inputs form a right triangle
#include <stdio.h>
#include <math.h>

int main() {
    float side1, side2, side3, angle1, angle2, angle3;

    printf("Enter the lengths of the sides: ");
    scanf("%f %f %f", &side1, &side2, &side3); 

    printf("Enter the angles in degrees: ");
    scanf("%f %f %f", &angle1, &angle2, &angle3);

    if ((angle1 == 90 || angle2 == 90 || angle3 == 90) && 
        ((pow(side1, 2) == pow(side2, 2) + pow(side3, 2)) || 
         (pow(side2, 2) == pow(side1, 2) + pow(side3, 2)) || 
         (pow(side3, 2) == pow(side1, 2) + pow(side2, 2)))) {
        printf("The inputs form a right triangle.\n");
    } 
    else {
        printf("The inputs do not form a right triangle.\n");
    }

    return 0;
}
