//C program to print sequence 1, 3, 7, 15..., also find the sum of the sequence for n numbers 
#include <stdio.h>

int main() {
    int n, i, num = 1, sum = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Sequence: ");
    for(i = 0; i < n; i++) {
        printf("%d\n ", num);
        sum += num;
        num = 2*num + 1;
    }

    printf("\nSum of the sequence: %d\n", sum);

    return 0;
}