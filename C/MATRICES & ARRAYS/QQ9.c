//C program to find the most repeated element in an array and also display the no. of times its repeating
#include<stdio.h>
#define SIZE 100

int main()
{
    int a[SIZE], i, j, n, count, max_count = 0, max_element;

    printf("Enter size of the array : ");
    scanf("%d", &n);

    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0; i<n; i++)
    {
        count = 1;
        for(j=i+1; j<n; j++)
        {
            if(a[i] == a[j])
            {
                count++;
            }
        }

        if(count > max_count)
        {
            max_count = count;
            max_element = a[i];
        }
    }

    printf("\nMost repeated element: %d", max_element);
    printf("\nNumber of times it's repeating: %d", max_count);

    return 0;
}
