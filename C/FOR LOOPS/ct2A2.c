//**Sum of first 'n' even Fibonacci numbers:**
#include <stdio.h>
int main() {
    int n, a = 0, b = 2, c, sum = 2;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for(int i=3; i<=n; i++) {
        c = 4*b + a;
        a = b;
        b = c;
        sum += c;
    }
    printf("Sum = %d", sum);
    return 0;
}
