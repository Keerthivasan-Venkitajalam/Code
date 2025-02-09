#include <stdio.h>

void printHello();
void printTable(int n);
int addNumbers(int a, int b);         // function prototype
int getInteger();

int main()
{
    // No arguments and No return
    printHello();                    // function call

    // Arguments passed and No return
    int num;
    printf("Enter the integer for multiplication table: ");
    scanf("%d",&num);
    printTable(num);
    //num=getInteger();

    // Arguments passed and return value
    int n1,n2,sum;
    printf("Enters two numbers: ");
    scanf("%d %d",&n1,&n2);
    sum = addNumbers(n1, n2);        // function call
    printf("sum = %d",sum);

    return 0;
}


void printHello()
{
printf("Hello!!!! \n");
}

void printTable(int n)
{
    printf("Table of %d is below\n",n);
    for (int i = 1; i <=12; i++)
    {
        printf("%d x %d = %d \n", i,n,i*n);
    }

}

int addNumbers(int a, int b)         // function definition   
{
    int result;
    result = a+b;
    return result;                  // return statement
}

// returns integer entered by the user
int getInteger() {
  int n;

  printf("Enter a positive integer: ");
  scanf("%d",&n);

  return n;
}