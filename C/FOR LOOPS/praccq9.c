//C program to calculate the sum of all numbers b/w 5 and 50 (include 5 and 50)
#include <stdio.h>
int main() {
    int i, sum = 0;
    for (i = 5; i <= 50; i++) {
        sum += i;
    }
    printf("the sum of all numbers between 5 and 50 (inclusive) is %d\n", sum);
    return 0;
}