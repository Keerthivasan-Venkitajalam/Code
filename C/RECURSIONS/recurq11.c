//Write a program in C to display the sum of n terms of the series [1+11+111+1111...]. Use the user defined recursive function to calculate the sum of series
#include <stdio.h>
int sum_of_series(int n, int term,int sum) {
    if(n == 0)
        return sum;
    else
        return sum_of_series(n-1, term*10+1, sum+term);
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Sum of the series is: %d\n", sum_of_series(n, 1, 0));
    return 0;
}
