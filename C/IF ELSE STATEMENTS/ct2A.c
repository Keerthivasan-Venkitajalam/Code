//Write a C program to accept three integers and print in descending order
#include <stdio.h>

int main() {
    int num1, num2, num3, temp;

    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 < num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    if (num1 < num3) {
        temp = num1;
        num1 = num3;
        num3 = temp;
    }

    if (num2 < num3) {
        temp = num2;
        num2 = num3;
        num3 = temp;
    }

    printf("Numbers in descending order: %d %d %d\n", num1, num2, num3);

    return 0;
}
