// CProgram to check if a number is odd or even(without using conditional statements).
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int Even = !(num & 1);

    printf("The number is %s.\n", Even ? "even" : "odd");

    return 0;
}
