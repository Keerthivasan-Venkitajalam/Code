#include <stdio.h>

double factorial(int n) {
    if(n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

double sum_series(int n) {
    double sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += factorial(i) / i;
    }
    return sum;
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Sum of series = %.2lf\n", sum_series(num));
    return 0;
}
