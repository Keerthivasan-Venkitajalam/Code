//C program to print the numbers from 0 to 'n', where 'n' is an input from user(for loop)
#include <stdio.h>

int main() {
    int x, n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(x = 0; x <= n; x++) {
        printf("%d\n", x);
    }

    return 0;
}
