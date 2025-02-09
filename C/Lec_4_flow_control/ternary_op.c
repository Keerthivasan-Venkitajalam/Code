
/* Ternary Operator

condition ? do if conditon is TRUE (1) : do if condition FAILS (0);

*/



#include<stdio.h>

void main()
{
    int age;
    printf("Enter the age: \n");
    scanf("%d", &age);
//////////////////////////////////////////////////////////////////////
    // if...else
    /* 
    if (age>=18)
        {
            printf("Adult \n");
        }
    else 
        {
            printf("Not Adult");
        } 
    */
///////////////////////////////////////////////////////////////////////    
    // Ternary Operator

    (age>=18) ? printf("Adult \n") : printf("Not adult");

}