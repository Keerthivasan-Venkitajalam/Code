//Write a C program to find the sum, average, product, largest number, smallest number,largest even number, smallest odd number in an user input 
//n- dimensional array. Write user defined functions for all above calculations and all this results showed must be printed from the main function itself
#include <stdio.h>
#include <limits.h>

void calculate(int arr[], int n) {
    int sum = 0, product = 1, largest = INT_MIN, smallest = INT_MAX, largest_even = INT_MIN, smallest_odd = INT_MAX;
    float average;

    for(int i = 0; i < n; i++) {
        sum += arr[i];
        product *= arr[i];

        if(arr[i] > largest) {
            largest = arr[i];
        }

        if(arr[i] < smallest) {
            smallest = arr[i];
        }

        if(arr[i] % 2 == 0 && arr[i] > largest_even) {
            largest_even = arr[i];
        }

        if(arr[i] % 2 != 0 && arr[i] < smallest_odd) {
            smallest_odd = arr[i];
        }
    }

    average = (float)sum / n;

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);
    printf("Product: %d\n", product);
    printf("Largest Number: %d\n", largest);
    printf("Smallest Number: %d\n", smallest);
    printf("Largest Even Number: %d\n", largest_even);
    printf("Smallest Odd Number: %d\n", smallest_odd);
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    calculate(arr, n);

    return 0;
}
