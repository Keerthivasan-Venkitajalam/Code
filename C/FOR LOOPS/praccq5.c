//C Program to print the multiplication table number input from the user
#include <stdio.h>
int main() {
    int num, k;
    printf("Enter a num: ");
    scanf("%d", &num);
    for(k = 1; k <= 1000; k++) {
        printf("%d * %d = %d \n", num, k, num*k);
    }
    return 0;
}
