#include <stdio.h>

int main() {
    int isSunday, isSnowing, isMonday, isRaining, num;

    // Input values
    printf("Enter 1 if it's Sunday, 0 otherwise: ");
    scanf("%d", &isSunday);
    printf("Enter 1 if it's snowing, 0 otherwise: ");
    scanf("%d", &isSnowing);
    printf("Enter 1 if it's Monday, 0 otherwise: ");
    scanf("%d", &isMonday);
    printf("Enter 1 if it's raining, 0 otherwise: ");
    scanf("%d", &isRaining);
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check conditions
    int condition1 = isSunday & isSnowing;
    int condition2 = isMonday | isRaining;
    int condition3 = (num >= 10) & (num <= 99);

    // Print results
    printf("Condition 1 (it's Sunday and snowing): %s\n", condition1 ? "True" : "False");
    printf("Condition 2 (it's Monday or it's raining): %s\n", condition2 ? "True" : "False");
    printf("Condition 3 (entered number is a two digit number): %s\n", condition3 ? "True" : "False");

    return 0;
}
