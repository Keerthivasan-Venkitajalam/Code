// to familarize with 'printf()'

// /n - new line

// format specifiers
// %d - integer (int)
// %c - character (char)
// %f - float 
// %lf - double 

// %.2f - display 2 numbers after decimal point (roundoff)
// %.3f - display 3 numbers after decimal point

#include <stdio.h>    
int main()
{ 
    // Displays the string inside quotations
    printf("C Programming \n");
    printf("C Programming \n");

    // Integer Output
    int test_integer = 5;
    printf("Number = %d \n", test_integer);
    
    // Float and Double
    float number1 = 13.5;
    double number2 = 12.4;

    printf("number1 = %f\n", number1);
    printf("number2 = %lf \n", number2);

    // Print Characters
    char chr = 'a';    
    printf("character = %c \n", chr);


    return 0;
}