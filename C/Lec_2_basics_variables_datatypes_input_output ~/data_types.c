// Basic datatpes 

//    integers (int)
//    character (char)
//    Real numbers, float
//    Real numbers,  double

#include<stdio.h>

int main()
{

    int age;
    int number=5;

    char letter;
    char star='*';

    float a1 = 1.4;
    float expo=12e3;
    double b;

    age=15;
    letter='a';
    b=5.78;

    printf("The number is %d \n", age);
    printf("The number is %f \n", expo);
    printf("The number is %lf \n", b);
    printf("The number is %c \n", letter);

    return 0;

}