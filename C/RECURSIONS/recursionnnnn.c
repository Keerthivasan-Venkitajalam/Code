#include <stdio.h>

double power(double base, int exponent) {
    if(exponent == 0)
        return 1;
    else
        return base * power(base, exponent - 1);
}

int main() {
    double base;
    int exponent;
    printf("Enter base and exponent: ");
    scanf("%lf %d", &base, &exponent);
    printf("%.2lf^%d = %.2lf\n", base, exponent, power(base, exponent));
    return 0;
}

