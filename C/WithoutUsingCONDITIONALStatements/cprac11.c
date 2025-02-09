//CProgram to check if a number is divisible by 2 or not (without using conditional statements).
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // If number is even, then bitwise AND with 1 will be 0
    // If number is odd, then bitwise AND with 1 will be 1
    int isEven = !(num & 1);

    printf("The number is %s divisible by 2.\n", isEven ? "" : "not");

    return 0;
}
