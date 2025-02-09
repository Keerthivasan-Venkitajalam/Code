#include <stdio.h>

double cube(double num) {
    return num * num * num;
}

int main() {
    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);
    printf("Cube of %.2lf = %.2lf\n", num, cube(num));
    return 0;
}
