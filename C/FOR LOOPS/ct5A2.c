//**Display 'n' terms of the series 1,8,27,... and their sum:**

#include <stdio.h>
int main() {
    int n, i, sum = 0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++) {
        printf("%d ", i*i*i);
        sum += i*i*i;
    }
    printf("\nSum = %d", sum);
    return 0;
}
