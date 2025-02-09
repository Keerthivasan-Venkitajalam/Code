//C program to keep tracking numbers input from user until user enters an odd number
#include <stdio.h>

int main() {
    int k;
    printf("Enter a number: ");
    scanf("%d", &k);
    while(k % 2 == 0) {
        printf("U have entered an even number, Please enter another number: ");
        scanf("%d", &k);
    }
    printf("U have entered an odd number: %d", k);
    return 0;
}
