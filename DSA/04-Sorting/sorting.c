/**
 ***************** COMPLETE THE FOLLOWING FUNCTIONS AS INSTRUCTED *****************
 **************** YOU ARE NOT ALLOWED TO ADD ANY MORE HEADER FILES ****************
 ***** YOU SHOULD NOT DECLARE ANY GLOBAL AND/OR STATIC VARIABLES IN THIS FILE *****
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "structure.h"
#include "sorting.h"

/*******************************************************************************/

/**
    A RECURSIVE function to implement BINARY SEARCH.
    The number of times the function binarySearch is called
        is to be stored in the global variable 'binarySearchCount'
        which is defined in sorting.h. You can directly use it here.
    @param A starting address of the array
    @param n number of elements in the array
    @param value the element to be searched
    @return  if value is present in the array, the index at which it is present
            -1, if value is not present in the array
    @note Take the base case as empty array.
    @note if n is even, take the index of the middle element as n/2.
*/
int binarySearch(int *A, int n, int value)
{
    binarySearchCount++; // use this statement for counting the number of times the function is called.

    // TODO
    if (n == 0)
        return -n - 1;
    int mid = n / 2;
    if (value == A[mid])
        return mid;
    if (value < A[mid])
        return binarySearch(A, n / 2, value);
    int idx = binarySearch(A + n / 2 + 1, n - n / 2 - 1, value);
    if (idx == -1)
        return -1;
    else
        return (idx + mid + 1);
}

/**
 * In every sorting function, you have to count the number of times any two array elements are compared.
 * The count of comparisons is to be stored in the global variable 'comparisons' which is defined in sorting.h.
 */

/*******************************************************************************/

/**
    A function to swap the integer values in two locations.
    @param d1 address of the first value
    @param d2 address of the second value
*/
void swap(int *a, int *b)
{

    // TODO
    int temp = *a;
    *a = *b;
    *b = temp;
}

/**
    A function to merge two sorted arrays to a new sorted array.
    Before merging, print the first array and the second array.
    After merging, print the number of comparisons
         performed during the merge process.
    @param A starting address of the first array
        which is sorted in non-decreasing order.
    @param n number of elements in the first array
    @param B starting address of the second array
        which is sorted in non-decreasing order.
    @param m number of elements in the second array
    @return starting address of the new merged array
*/
int *merge(int *A, int n, int *B, int m)
{
    // Use printArray() function to print the arrays
    // use this statement to count the number of times any two array elements are compared

    // TODO
    int comparison1 = 0;
    printArray(A, n);
    printArray(B, m);
    int *C = (int *)malloc(sizeof(int) * (m + n));
    int Acount = 0;
    int Bcount = 0;
    for (int i = 0; i < (m + n); i++)
    {
        if (Acount == n && Bcount == m)
        {
            break;
        }
        else if (Acount == n)
        {
            C[i] = B[Bcount];
            Bcount++;
        }
        else if (Bcount == m)
        {
            C[i] = A[Acount];
            Acount++;
        }
        else if (A[Acount] < B[Bcount])
        {
            comparisons++;
            comparison1++;
            C[i] = A[Acount];
            Acount++;
        }
        else if (A[Acount] >= B[Bcount])
        {
            comparisons++;
            comparison1++;
            C[i] = B[Bcount];
            Bcount++;
        }
    }
    printf("%d\n", comparison1);
    return C;
}

/**
    A RECURSIVE function to sort an array of integers
        in non-decreasing order using MERGE SORT.
    @param A starting address of the array
    @param n number of elements in the array
    @note If n is odd, the left half will have one element less than the right half.
*/
void mergeSort(int *A, int n)
{
    // TODO
    if (n == 1)
        return;
    mergeSort(A, n / 2);
    mergeSort(A + n / 2, n - n / 2);
    int *C = merge(A, n / 2, A + n / 2, n - n / 2);
    for (int i = 0; i < n; i++)
    {
        A[i] = C[i];
    }
}

/*******************************************************************************/

/**
    A RECURSIVE function to partition an array as follows.
        Let the last element be the pivot.
        If the first element in the array is less than or equal to pivot,
            recursively partition the remaining array.
        Otherwise,
            move the first element to last position and
            the second last element to the first position and
            pivot to the second last position and then
            recursively partition the array without the last element.
    @param A starting address of the array
    @param n number of elements in the array
    @return the index of the pivot after partitioning
*/
int recPartition(int *A, int n)
{
    // use this statement to count the number of times any two array elements are compared
    // TODO
    if (n == 1)
        return 0;
    int p = A[n - 1];
    if (A[0] <= p)
    {
        comparisons++;
        return recPartition(A + 1, n - 1) + 1;
    }
    else
    {
        comparisons++;
        swap(A, A + n - 1);
        swap(A, A + n - 2);
        return recPartition(A, n - 1);
    }
}

/**
    A RECURSIVE function to sort an array of integers
        in non-decreasing order using QUICK SORT.
    Before performing each partition, print the array and the pivot.
    After performing each partition, print the index of the pivot.
    @param A starting address of the array
    @param n number of elements in the array
*/
void quickSort(int *A, int n)
{
    // Use printArray() function to print the sub-arrays
    // TODO
    if (n == 0)
        return;
    if (n > 1)
    {
        printf("%d ", A[n - 1]);
        int p = recPartition(A, n);
        printf("%d\n", p);
        printArray(A, p);
        printArray(A + p + 1, n - p - 1);
        quickSort(A, p);
        quickSort(A + p + 1, n - p - 1);
    }
}

/*******************************************************************************/
/******   In this section, you can reuse the functions from assignment-3  ******/

/**
    A RECURSIVE function to return the index of
        the smallest element in an array.
    If the minimum element is present more than once in the array,
        return the index of its first occurrence.
    @param A starting address of the array
    @param n number of elements in the array
    @return the index of the smallest element in the array
*/
int minIndex(int *A, int n)
{
    // use this statement to count the number of times any two array elements are compared

    // TODO
    if (n == 1)
        return 0;
    int min = minIndex(A + 1, n - 1) + 1;
    if (A[min] < A[0])
    {
        comparisons++;
        return min;
    }
    else
    {
        comparisons++;
        return 0;
    }
}

/**
    A RECURSIVE function to sort an array of integers
        in non-decreasing order using SELECTION SORT.
    @param A starting address of the array
    @param n number of elements in the array
*/
void selectionSort(int *A, int n)
{

    // TODO
    if (n == 0)
        return;
    swap(A + minIndex(A, n), A);
    selectionSort(A + 1, n - 1);
}

/**
    A RECURSIVE function to place the nth element A[n-1] of an array A
    in which the first n-1 elements A[0..n-2] are in non-decreasing order,
    such that the entire array of n elements is in non-decreasing order.
    @param A starting address of the array
    @param n number of elements in the array
*/
void insert(int *A, int n)
{
    // use this statement to count the number of times any two array elements are compared
    // TODO
    if (n == 1)
        return;
    if (A[n - 2] > A[n - 1])
    {
        comparisons++;
        swap(A + n - 2, A + n - 1);
        insert(A, n - 1);
    }
    else
    {
        comparisons++;
        return;
    }
}

/**
    A RECURSIVE function to sort an array of integers
        in non-decreasing order using INSERTION SORT.
    @param A starting address of the array
    @param n number of elements in the array
*/
void insertionSort(int *A, int n)
{

    // TODO
    if (n == 0)
        return;
    insertionSort(A, n - 1);
    insert(A, n);
}

/*******************************************************************************/
int isPowerOfTwo(int x)
{
    if (x <= 0)
    {
        return 0;
    }
    while (x > 1)
    {
        if (x % 2 != 0)
        {
            return 0;
        }
        x /= 2;
    }
    return 1;
}

int greatestPowerOfTwo(int x)
{
    int power = 1;
    while (power * 2 < x)
    {
        power *= 2;
    }
    return power;
}

/**
    A function to sort an array of integers in non-decreasing order
        using a hybrid sorting explained in Qn.3.c.
    @param A starting address of the array
    @param n number of elements in the array
*/
void hybridSort(int *A, int n)
{
    // TODO
    if (isPowerOfTwo(n))
        mergeSort(A, n);
    else
    {
        int m = greatestPowerOfTwo(n);
        mergeSort(A, m);
        selectionSort(A + m, n - m);
        int *C = merge(A, m, A + m, n - m);
        for (int i = 0; i < n; i++)
        {
            A[i] = C[i];
        }
    }
}

/**
    A function to sort an array of integers in non-decreasing order
        using a hybrid sorting explained in Qn.4.c.
    @param A starting address of the array
    @param n number of elements in the array
*/
void quickSortModified(int *A, int n)
{

    // TODO
    if (n == 1)
        return;
    if (n < 5)
    {
        insertionSort(A, n);
    }
    else
    {
        printf("%d ", A[n - 1]);
        int p = recPartition(A, n);
        printf("%d\n", p);
        printArray(A, p);
        printArray(A + p + 1, n - p - 1);
        quickSortModified(A, p);
        quickSortModified(A + p + 1, n - p - 1);
    }
}

/*******************************************************************************/

/**
    A function to swap the movie data in two locations.
    @param d1 address of the first movie
    @param d2 address of the second movie
*/
void swapMovies(movie *m1, movie *m2)
{

    // TODO
    movie temp = *m1;
    *m1 = *m2;
    *m2 = temp;
}

/**
    A function to find the average rating of a movie.
    @param m address of the movie
    @return the average rating of the movie
*/
float averageRating(movie *m)
{

    // TODO
    float sum = 0;
    int len = m->ratings->size;
    for (int i = 0; i < len; i++)
    {
        sum = sum + m->ratings->start[i];
    }
    return sum / len;
}

/**
    A function to compare two movies based on
        their title and average rating.
    @param m1 address of the first movie
    @param m2 address of the second movie
    @return -1 if the titles of m1 and m2 are in alphabetic order
            1 if the titles of m1 and m2 are not in alphabetical order
            -1 if the titles of m1 and m2 are same and the average rating of m1 is higher
            1 if the titles of m1 and m2 are same and the average rating of m2 is higher
            0 if the titles and the average ratings of m1 and m2 are same
*/
int compareTitleRating(movie *m1, movie *m2)
{
    // use strcmp() function to compare the titles.

    // TODO
    if (strcmp(m1->title, m2->title) == 0 && m1->avgRating == m2->avgRating)
    {
        return 0;
    }
    else if (strcmp(m1->title, m2->title) == 0 && m1->avgRating < m2->avgRating)
    {
        return 1;
    }
    else if (strcmp(m1->title, m2->title) == 0 && m1->avgRating > m2->avgRating)
    {
        return -1;
    }
    else if (strcmp(m1->title, m2->title) < 0)
    {
        return -1;
    }
    else if (strcmp(m1->title, m2->title) > 0)
    {
        return 1;
    }
}

/**
    A function to place the nth movie M[n-1] in an array of movies M
    in which the first n-1 movies M[0..n-2] are in the order of their title and average rating,
    such that the entire array of movies is in the order of their title and average rating.
    @param M starting address of the movie array
    @param size number of movies in the array
*/
void insertMovie(movie *M, int size)
{
    if (size <= 1)
        return;
    movie L = M[size - 1];
    for (int i = 0; i < size - 1; i++)
    {
        if (compareTitleRating(&L, M + i) == -1)
        {
            for (int j = size - 1; j > i; j--)
            {
                M[j] = M[j - 1];
            }
            M[i] = L;
            break;
        }
    }
}

/**
    A function to sort an array of movies in the order
        of their title and average rating using INSERTION SORT.
    @param M the movie array
*/
void movieInsertionSort(movieArray *M)
{

    // TODO
    for (int i = 1; i < M->size; i++)
    {
        insertMovie(M->start, i + 1);
    }
}

/*******************************************************************************/
int checkInOrder(date d1, date d2)
{
    if (d1.year < d2.year)
        return 1;
    else if (d1.year == d2.year)
    {
        {
            if (d1.month < d2.month)
                return 1;
            else if (d1.month == d2.month)
            {
                if (d1.day < d2.day)
                    return 1;
                else
                    return 0;
            }
            else
                return 0;
        }
    }
    else
        return 0;
}
/**
    A function to compare two dates.
    @param d1 first date
    @param d2 second date
    @return -1 if the dates d1 and d2 are in order
            1 if the dates d1 and d2 are not in order
            0 if the dates d1 and d2 are same
*/
int compareDate(date d1, date d2)
{

    // TODO
    if (d1.day == d2.day && d1.month == d2.month && d1.year == d2.year)
        return 0;
    else if (checkInOrder(d1, d2) == 0)
        return 1;
    else if (checkInOrder(d1, d2) == 1)
        return -1;
}

/**
    A function to compare two movies based on
        their release date and title.
    @param m1 address of the first movie
    @param m2 address of the second movie
    @return -1 if the release dates of m1 and m2 are in order
            1 if the release dates of m1 and m2 are not in order
            -1 if the release dates of m1 and m2 are same and the titles of m1 and m2 are in alphabetic order
            1 if the release dates of m1 and m2 are same and the titles of m1 and m2 are not in alphabetic order
            0 if the release dates and titles of m1 and m2 are same
*/
int compareDateTitle(movie *m1, movie *m2)
{
    // use compareDate() function to compare the release dates of the movies.
    // use strcmp() function to compare the titles.

    // TODO
    if (strcmp(m1->title, m2->title) == 0 && compareDate(m1->releaseDate, m2->releaseDate) == 0)
    {
        return 0;
    }
    else if (strcmp(m1->title, m2->title) < 0 && compareDate(m1->releaseDate, m2->releaseDate) == 0)
    {
        return -1;
    }
    else if (strcmp(m1->title, m2->title) > 0 && compareDate(m1->releaseDate, m2->releaseDate) == 0)
    {
        return 1;
    }
    else if (compareDate(m1->releaseDate, m2->releaseDate) == 1)
    {
        return 1;
    }
    else if (compareDate(m1->releaseDate, m2->releaseDate) == -1)
    {
        return -1;
    }
}

/**
    A function to return the index of the movie that comes first
        in the order of release date and title.
    @param M starting address of the movie array
    @param size number of movies in the array
    @return the index of the movie that comes first in order
*/
int minimumIndexMovie(movie *M, int size)
{
    // use compareDateTitle() function to compare two movies.
    // you can make the comparisons here also, but that may make your code difficult to manage.

    // TODO
    int minIdx = 0;
    for (int i = 0; i < size; i++)
    {
        if (compareDateTitle(M + i, M + minIdx) == -1)
        {
            minIdx = i;
        }
    }
    return minIdx;
}

/**
    A function to sort an array of movies in the order
        of their release date and title using SELECTION SORT.
    @param M the movie array
*/
void movieSelectionSort(movieArray *M)
{
    // TODO
    for (int i = 0; i < M->size; i++)
    {
        int minIdx = minimumIndexMovie(M->start+i, M->size-i) + i;
        printf("%d", minIdx);
        swapMovies(M->start+ i, M->start+ minIdx);
    }
}

/*******************************************************************************/
