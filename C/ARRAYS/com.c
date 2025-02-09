#include <stdio.h>
#define M 4
#define N 5

void printCommonElements(int mat[M][N]) {
    int column[M];
    for (int i = 0; i < M; i++)
        column[i] = N - 1;

    int min_row = 0;
    int min_val = mat[0][N - 1];

    while (column[min_row] >= 0) {
        for (int i = 0; i < M; i++) {
            if (mat[i][column[i]] < min_val) {
                min_val = mat[i][column[i]];
                min_row = i;
            }
        }

        int eq_count = 0;
        for (int i = 0; i < M; i++) {
            if (mat[i][column[i]] > min_val) {
                if (column[i] == 0)
                    return;
                column[i] -= 1;
            } else
                eq_count++;
        }

        if (eq_count == M)
            printf("%d ", min_val);
    }
}

int main() {
    int mat[M][N] = {{1, 2, 3, 4, 5},
                     {2, 4, 5, 8, 10},
                     {3, 5, 7, 9, 11},
                     {1, 3, 5, 7, 9},
                    };
    printCommonElements(mat);
    return 0;
}
/*#include <stdio.h>
#define ROWS 3 // number of rows in the matrix
#define COLS 4 // number of columns in the matrix
#define SIZE ROWS*COLS // size of the matrix and the frequency array

int main()
{
    // declare and initialize a matrix of integers
    int matrix[ROWS][COLS] = {
        {1, 2, 3, 4},
        {5, 6, 1, 7},
        {8, 9, 2, 10}
    };

    // declare and initialize an array of integers to store the frequency of each element
    int freq[SIZE] = {0};

    // use a nested for loop to iterate over each element in the matrix
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            // increment the corresponding frequency in the array
            // the index of the frequency array is the value of the matrix element minus one
            freq[matrix[i][j] - 1]++;
        }
    }

    // declare and initialize a variable to store the maximum frequency
    int max_freq = 0;

    // use another for loop to find the maximum frequency
    for (int i = 0; i < SIZE; i++)
    {
        // compare each element in the frequency array with the maximum frequency
        if (freq[i] > max_freq)
        {
            // update the maximum frequency if a larger value is found
            max_freq = freq[i];
        }
    }

    // use a final for loop to print the most common elements in the matrix
    printf("The most common elements in the matrix are:\n");
    for (int i = 0; i < SIZE; i++)
    {
        // check if the element has the same frequency as the maximum frequency
        if (freq[i] == max_freq)
        {
            // print the element value by adding one to the index
            printf("%d ", i + 1);
        }
    }
    printf("\n");

    return 0;
}
*/