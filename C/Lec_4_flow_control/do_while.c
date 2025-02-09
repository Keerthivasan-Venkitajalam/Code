

#include <stdio.h>
int main() {

  // Program to add numbers until the user enters zero
  double number, sum = 0;

  // the body of the loop is executed at least once
  do {
    printf("Enter a number: ");
    scanf("%lf", &number);
    sum += number;
  }
  while(number != 0.0);

  printf("Sum = %.2lf",sum);

  ////////////////////////////////////////////////////////////////////////////

  // Print numbers from 1 to n
  

  int i=1,num;
  printf("\n Enter the value n: ");
  scanf("%d",&num);
  //-------------------------------------------

  printf("\n while loop");
  while (i < num) {
    printf(" \n %d", i);
    ++i;
  }

  //---------------------------------------------

  printf("\n do...while loop");

  i=1;
  do {
    printf("\n %d", i);
    i++;
  }while(i<num);

  ////////////////////////////////////////////////////////////////////////////

  return 0;
}