//**Display 'n' terms of the sequence 0,1,3,6,10,... and their sum:**

#include <stdio.h>
int main() {
    int n, i, sum = 0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        printf("%d ", i*(i+1)/2);
        sum += i*(i+1)/2;
    }
    printf("\nSum = %d", sum);
    return 0;
}
