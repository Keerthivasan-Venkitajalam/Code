#include <stdio.h>

void sum() {
    int a, b;
    printf("Enter any 2 integers: ");
    scanf("%d %d", &a, &b);
    printf("The sum of the two numbers is: %d\n", a + b);
}

int main() {
    sum();
    printf("hello");
    sum();
    sum();
    sum();
    sum();
    sum();
    return 0;
}
