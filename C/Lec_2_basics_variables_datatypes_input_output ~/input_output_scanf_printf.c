
// to familarize with 'scanf() and print(f)'

// scanf() - to get the user values of variables
// printf() - to display

// /n - new line

// format specifiers
// %d - integer (int)
// %c - character (char)
// %f - float 
// %lf - double 


#include <stdio.h>
int main()
{/*
    // Integer I/O 
    
    int test_integer;
    printf("Enter an integer: \n");
    scanf("%d", &test_integer);  
    printf("Number = %d \n",test_integer);

    // Float and Double

    float num1;
    double num2;

    printf("Enter a number: \n");
    scanf("%f", &num1);
    printf("Enter another number: \n");
    scanf("%lf", &num2);

    printf("num1 = %.2f\n", num1);
    printf("num2 = %lf\n", num2);
*/
    

    //Character I/O

    char chr;
    printf("Enter a character: \n");
    scanf("%c",&chr);     
    printf("You entered %c.\n", chr);

    //ASCI Values     

    // When %d is used, ASCII value is displayed
    printf("ASCII value is %d. \n", chr);

    // Multiple I/O Values
    int a;
    float b;

    printf("Enter integer and then a float: \n");
  
    // Taking multiple inputs
    scanf("%d%f", &a, &b);
    printf("You entered %d and %.3f \n", a, b);
    printf("You entered %d and %.3f and product is %f \n", a, b, a*b);

    

    return 0;
}