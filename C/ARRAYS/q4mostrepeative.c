#include <stdio.h>

int findMostFrequent(int arr[], int n) {
    int max_count = 0, res = -1, curr_count = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1])
            curr_count++;
        else {
            if (curr_count > max_count) {
                max_count = curr_count;
                res = arr[i - 1];
            }
            curr_count = 1;
        }
    }
    if (curr_count > max_count)
    {
        max_count = curr_count;
        res = arr[n - 1];
    }

    return res;
}
int main() {
    int arr[] = {1, 5, 2, 1, 3, 2, 1}; 
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Most frequent element is %d", findMostFrequent(arr, n));
    return 0;
}