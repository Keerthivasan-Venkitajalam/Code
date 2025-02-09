
/* Break statement;

Program to calculate the sum of numbers (10 numbers max)
If the user enters a negative number, the loop terminates

*/

#include<stdio.h>
int main()
{

   double number, sum = 0.0;
   
////////////////////////////////////////////////////
/*
    for (int i = 1; i <= 10; ++i) {
        printf("Enter the number_%d: ", i);
        scanf("%lf", &number);

        // if the user enters a negative number, break the loop
        if (number < 0.0) {
            break;
        }

        sum += number; // sum = sum + number;
   }

   printf("Sum = %.2lf", sum);
*/
/////////////////////////////////////////////////////////////////
//Program to calculate the sum of numbers (10 numbers max)
//If the user enters a negative number, the loop terminates
int i = 1;
do
{
    printf("Enter the number_%d: ", i);
    scanf("%lf", &number);

    // if the user enters a negative number, break the loop
    if (number < 0.0) 
    {
        break;
    }

    sum += number; // sum = sum + number;

} while (1);

printf("Sum = %.2lf", sum);

}