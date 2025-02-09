// To familiarize arithmetic operators and instructions

// basic arithmetic operators +, -, *, /
// modulus operator %
// to find x^y, pow(x,y), include math.h

// see the operator precedence 

#include<stdio.h>
#include<math.h>


int main()
{
    int a, b, sum, multiply, division,remainder,power;
    a=11;
    b=2;
    sum=a+b;
    multiply=a*b;
    division=a/b;
    remainder=a%b;
    

    // b+a=sum; // INVALID
    // multiply=ab; // INVALID
    // remainder=1.6 % 1.0; // INVALID, modulo operator didn't work on float numbers


    // power=a^b; // INVALID, Bitwise operator, XOR
    power = pow(a,b);


    printf("sum is %d \n", sum);
    printf("product is %d \n ", multiply);
    printf("division is %d \n", division);
    printf("remainder is %d \n", remainder);
    printf("power is %d \n" , power);


    // Type conversion

    printf("2*6=%d \n", 2*6);
    printf("2*3.4 = %d \n", 2*3.4);
    printf("5 / 2.5= %f \n", 5/2.5);

    printf("(int value) 5/3 = %d \n", 5/3);
    printf(" (float value) 5/3 = %f \n", 5/3);
    printf(" (real float value) 5/3 = %f \n", 5.0/3);

    int p=1.999999; //implicit type conversion
    printf("p= %d \n", p);
    int q=(int)1.999999; // explicit type conversion
    printf("q= %d \n", q);

    // Operator Precedence

    int u = 4 + 9 * 10;
    printf("u = %d \n", u);

    int v = (4 + 9) * 10;
    printf("v = %d \n", v);

    int w = 4 * 3 / 6 * 2;
    //int w =4+5-2+1;
    printf("w = %d \n", w);

    int x = (4 * 3) / (6 * 2);
    printf("x = %d \n", x);

    return 0;
}