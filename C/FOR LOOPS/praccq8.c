//C program to print all numbers from 1 to 10 except from 6
#include <stdio.h>

int main() {
    int s, k = 1;
    printf("Enter a num: ");
    scanf("%d", &s);
    do {
        if(k != 6) {
            printf("%d\n", k);
        }
        k++;
    } while(k <= s);
    return 0;
}
