#include <stdio.h>

int main() {
    int i, n;
    float array[20], max;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; ++i) {
       printf("Enter Number %d: ", i+1);
       scanf("%f", &array[i]);
    }

    max = array[0];

    for(i = 1; i < n; ++i) {
       if(array[i] > max) {
           max = array[i];  
       }
    }

    printf("Largest element = %f", max);

    return 0;
}
