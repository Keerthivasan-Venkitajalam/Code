//C program to print the numbers from 0 to 'n', where 'n' is an input from user(while loop)
#include <stdio.h>

int main() {
    int x = 0, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(x <= n) {
        printf("%d\n", x);
        x++;
    }

    return 0;
}
