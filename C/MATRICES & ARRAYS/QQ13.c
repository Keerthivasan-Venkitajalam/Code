//C program to find the union and intersection of two arrays
#include<stdio.h>
#define SIZE 100

int main()
{
    int a[SIZE], b[SIZE], union_arr[SIZE], intersection_arr[SIZE], i, j, n, m, union_count = 0, intersection_count = 0, found;

    printf("Enter size of the first array : ");
    scanf("%d", &n);

    printf("Enter elements in first array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        union_arr[union_count++] = a[i];
    }

    printf("Enter size of the second array : ");
    scanf("%d", &m);

    printf("Enter elements in second array : ");
    for(i=0; i<m; i++)
    {
        scanf("%d", &b[i]);

        found = 0;
        for(j=0; j<n; j++)
        {
            if(b[i] == a[j])
            {
                found = 1;
                intersection_arr[intersection_count++] = b[i];
                break;
            }
        }

        if(found == 0)
        {
            union_arr[union_count++] = b[i];
        }
    }

    printf("\nUnion of two arrays: ");
    for(i=0; i<union_count; i++)
    {
        printf("%d ", union_arr[i]);
    }

    printf("\nIntersection of two arrays: ");
    for(i=0; i<intersection_count; i++)
    {
        printf("%d ", intersection_arr[i]);
    }

    return 0;
}
