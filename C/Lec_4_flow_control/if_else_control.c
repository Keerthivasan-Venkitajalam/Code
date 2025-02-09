
/*  
if..else

if ( condition )
    {
        do if condition  TRUE (1)
    }
else
    {
        do if condition FAILS (0)
    }
*****************************************************

if ( condition 1 )
    {
        do if condition TRUE (1)
    }
else if ( condition 2)
        {
            do if condition 1 FAILS (0) and condition 2 TRUE (1)
        } 
else if ( condition 3)
        {
            do if conditions 1 & 2 FAILS (0) and condition 3 TRUE (1)
        }
else
    {
    do if conditions 1 & 2 & 3 FAILS (0) and condition 3 TRUE (1) 
    }
********************************************************************

*/



#include<stdio.h>

void main()
{
    ////////////////////////////////////////////////////////////
    /*  int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    // true if number is less than 10
    if (number < 10) {
        printf("You entered a number less than 10.\n");
    }
    printf("program is over \n"); */ 


    ///////////////////////////////////////////////////////////
    
     /* int age;
    printf("Enter Age: ");
    scanf("%d", &age);

    if(age>=18){
        printf("Adult\n");
        printf("you can vote \n");
    }
    else {
        printf("not adult \n");
        printf("you can't vote \n");
    }
    printf("program is over \n");
  */

    /////////////////////////////////////////////////////////////////
    /*  int number1, number2;
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    //checks if the two integers are equal.
    if(number1 == number2) {
        printf("Result: %d = %d \n",number1,number2);
    }

    //checks if number1 is greater than number2.
    else if (number1 > number2) {
        printf("Result: %d > %d \n", number1, number2);
    }

    //checks if both test expressions are false
    else {
        printf("Result: %d < %d \n",number1, number2);
    } */


 
            
    //////////////////////////////////////////////////////////
    
     int mark;
    printf("Enter Mark: ");
    scanf("%d", &mark);

    if (mark>=90)
    {
        printf("Passed, Grade is A+ \n");
    }
    else if (mark>=80)
    {
        printf("Passed, Grade is A \n");   
    }
    else if (mark>=70)
    {
        printf("Passed, Grade is B+");
    }
    else if (mark>=60)
    {
        printf("Passed, Grade is B \n");   
    }
    else if (mark>=50)
    {
        printf("Passed, Grade is C \n");   
    }
    else if (mark>=40)
    {
        printf("Passed, Grade is D \n");   
    }
    else {
        printf("Failed \n");
    }  
    
    



}