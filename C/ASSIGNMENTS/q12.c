#include <stdio.h>

int main() {
    int n, dec, oct = 0, i = 1;

    printf("\n\nConvert Decimal to Octal:\n ");
    printf("\n");
    printf("Enter a number to convert : ");
    scanf("%d", &n);

    dec = n;

    while(n > 0) {
        oct += (n % 8) * i;
        n /= 8;
        i *= 10;
    }

    printf("\nThe Octal of %d is %d.\n\n", dec, oct);

    return 0;
}
