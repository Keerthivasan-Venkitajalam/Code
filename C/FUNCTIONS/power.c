#include <stdio.h>
#include <math.h>

double power(double base, double exponent) {
    return pow(base, exponent);
}

int main() {
    double base, exponent;
    printf("Enter base and exponent: ");
    scanf("%lf %lf", &base, &exponent);
    printf("%.2lf^%.2lf = %.2lf\n", base, exponent, power(base, exponent));
    return 0;
}
