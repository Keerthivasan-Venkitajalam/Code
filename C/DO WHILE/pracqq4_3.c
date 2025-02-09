//C program to print the numbers from 0 to 'n', where 'n' is an input from user(do...while loop)


#include <stdio.h>

int main() {
    int num, i = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    do {
        printf("%d\n", i);
        i++;
    } while(i <= num);
    return 0;
}
