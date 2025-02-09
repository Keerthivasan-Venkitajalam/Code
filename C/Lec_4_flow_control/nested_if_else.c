/* Nested if

if ( condition 1 )
  {
    do if condition 1 is  TRUE (1)
    if ( condition 2 )
      {
        do if conditions 1 & 2 are  TRUE (1)
        if ( condition 3)
          {
            do if condition 1, 2, & 3 are  TRUE (1)
          }
      }
  }
else
  {
    do if condition 1 FAILS (0)
  }

*/



#include <stdio.h>
int main() {
    int number1, number2;
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    if (number1 >= number2) {
      if (number1 == number2) {
        printf("Result: %d = %d",number1,number2);
      }
      else {
        printf("Result: %d > %d", number1, number2);
      }
    }
    else {
        printf("Result: %d < %d",number1, number2);
    }

    return 0;
}