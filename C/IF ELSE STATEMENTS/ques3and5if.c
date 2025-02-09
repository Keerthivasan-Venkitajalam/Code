#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 3 == 0 && num % 5 == 0) {
        printf("The number is divisible by both 3 and 5.");
    } 
    else if (num % 3 == 0) {
        printf("The number is divisible by 3.");
    } 
    else if (num % 5 == 0) {
        printf("The number is divisible by 5.");
    } else {
        printf("The number is not divisible by either 3 or 5.");
    }
    return 0;

}