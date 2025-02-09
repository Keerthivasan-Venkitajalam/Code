//Write a C program to find the smallest among the 3 integers entered.
#include <stdio.h>

int Smallest(int num1, int num2, int num3) {
    if (num1 <= num2 && num1 <= num3) {
        return num1;
    } else if (num2 <= num1 && num2 <= num3) {
        return num2;
    } else {
        return num3;
    }
}

int main() {
    int num1, num2, num3, smallest;

    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    smallest = Smallest(num1, num2, num3);
    printf("The smallest number is: %d\n", smallest);

    return 0;
}
