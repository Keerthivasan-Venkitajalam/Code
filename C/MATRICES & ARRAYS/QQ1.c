//C program to find duplicates in an array
#include<stdio.h>


int main()
{
    int arr[20], i, j, n;
    printf("Enter size of the array : ");
    scanf("%d", &n);
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nDuplicate elements in array are : ");
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i] == arr[j])
            {
                printf("%d ", arr[j]);
            }
        }
    }
    return 0;
}
