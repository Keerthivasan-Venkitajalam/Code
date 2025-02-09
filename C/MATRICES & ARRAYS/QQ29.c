#include<stdio.h>
#include<math.h>

int main() {
    float a, b, c, d;
    float trace, determinant, lambda1, lambda2;

    printf("Enter the elements of 2x2 matrix: ");
    scanf("%f%f%f%f", &a, &b, &c, &d);

    trace = a + d;
    determinant = a * d - b * c;

    lambda1 = trace / 2 + sqrt(pow(trace / 2, 2) - determinant);
    lambda2 = trace / 2 - sqrt(pow(trace / 2, 2) - determinant);

    printf("Eigen values of the given matrix are: %.2f and %.2f", lambda1, lambda2);

    return 0;
}
