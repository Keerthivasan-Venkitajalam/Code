#include <stdio.h>

int main() {
    int n, count = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    while(n > 1) {
        n = n / 2;
        count++;
    }
    printf("The division was performed %d times\n", count);

    return 0;
}
