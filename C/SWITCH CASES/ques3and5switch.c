#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    //condition ? consequent : alternative
    int div3 = (num % 3 == 0) ? 1 : 0;
    int div5 = (num % 5 == 0) ? 1 : 0;
    int div3And5 = (num % 3 == 0 && num % 5 == 0) ? 1 : 0;
    switch(div3) {
        case 1:
            printf("The number %d is divisible by 3.\n", num);
            break;
        default:
            printf("The number %d is not divisible by 3.\n", num);
            break;
    }
    switch(div5) {
        case 1:
            printf("The number %d is divisible by 5.\n", num);
            break;
        default:
            printf("The number %d is not divisible by 5.\n", num);
            break;
    }

    switch(div3And5) {
        case 1:
            printf("The number %d is divisible by both 3 and 5.\n", num);
            break;
        default:
            printf("The number %d is not divisible by both 3 and 5.\n", num);
            break;
    }

    return 0;
}
