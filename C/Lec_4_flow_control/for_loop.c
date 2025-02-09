#include<stdio.h>

int main()
{
    int i;
    for (i = 1; i < 11; i++)
    {
        printf("%d ", i);
    }

    //////////////////////////////////////////////////////////////////

    /* for (int j = 1; j < 11; j++)
    {
        printf("\n %d ", j);
    }
    ///////////////////////////////////////////////////////////////////

    for (float k= 0.0; k < 5.0; k+=0.5)
    {
        printf("\n %0.2f ", k);
    }

    ///////////////////////////////////////////////////////////////////

    for (char ch='a';ch<='z';++ch)
    {
        printf(" %c ", ch);
    }

    ///////////////////////////////////////////////////////////////////

    //INFINITE LOOP

    for (int i; ;++i)
    {
        printf(" \n hello ");
    }

    ///////////////////////////////////////////////////////////////////

    // Program to calculate the sum of first n natural numbers
    // Positive integers 1,2,3...n are known as natural numbers

    int num, count, sum = 0;

    printf(" \n Enter a positive integer: ");
    scanf("%d", &num);

    // for loop terminates when num is less than count
    for(count = 1; count <= num; ++count)
    {
        sum += count;
    }

    printf("Sum of first %d natural numbers is = %d", num,sum);



 */

    return 0;
}