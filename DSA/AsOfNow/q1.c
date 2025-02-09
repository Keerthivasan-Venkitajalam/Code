#include <stdio.h>

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    
    if(n % 2 == 0) {
        printf("%d\n", n/2);
    } else {
        printf("%d\n", n/2 + 1);
    }

    return 0;
}
