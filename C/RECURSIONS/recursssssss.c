#include <stdio.h>

int gcd(int a, int b) {
    if(b != 0)
       return gcd(b, a%b);
    else
       return a;
}

int main() {
    int num1, num2;
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);
    printf("GCD of %d and %d = %d\n", num1, num2, gcd(num1, num2));
    return 0;
}
