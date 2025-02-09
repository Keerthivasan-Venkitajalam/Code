#include <stdio.h>

int main()
{
    int n, i, j, temp;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n]; // Declare an array of size n

    printf("Enter the elements: ");
    
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); // Input each element
    }
    // Bubble sort
    for (i = 0; i < n-1; i++)     
       for (j = 0; j < n-i-1; j++) 
           if (arr[j] > arr[j+1])
           {
              temp = arr[j];
              arr[j] = arr[j+1];
              arr[j+1] = temp;
           }
    printf("The minimum element is %d\n", arr[0]); // Print the minimum element
    printf("The largest element is %d\n", arr[n-1]); // Print the largest element
    printf("The second largest element is %d\n", arr[n-2]); // Print the second largest element
    return 0;
}
