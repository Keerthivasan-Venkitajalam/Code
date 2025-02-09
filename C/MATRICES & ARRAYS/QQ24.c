//C program to check which row or matrix of a matrix has the most repeated elements
#include<stdio.h>
#define SIZE 100

int main()
{
    int a[SIZE][SIZE], i, j, k, m, n, count, max_count = 0, max_element, max_row;

    printf("Enter number of rows : ");
    scanf("%d", &m);

    printf("Enter number of columns : ");
    scanf("%d", &n);

    printf("Enter elements in matrix : ");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            count = 1;
            for(k=j+1; k<n; k++)
            {
                if(a[i][j] == a[i][k])
                {
                    count++;
                }
            }

            if(count > max_count)
            {
                max_count = count;
                max_element = a[i][j];
                max_row = i+1;
            }
        }
    }

    printf("\nRow with most repeated elements: %d", max_row);
    printf("\nMost repeated element: %d", max_element);
    printf("\nNumber of times it's repeating: %d", max_count);

    return 0;
}
