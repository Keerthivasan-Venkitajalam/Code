/* switch ..... case 

switch (expression)
    {
        case 1 :
             do if expression==1;
            break;
        case 2 :
             do if expression==1;
            break;
        case n :
             do if expression==n;
            break;
        default:
            break;
    }

*/

#include <stdio.h>

int main() {

    
    /* int time;

    printf("Enter 1 ; Morning \n");
    printf("Enter 2 ; Noon \n");
    printf("Enter 3 ; Evening \n");
    printf("Enter 4 ; Night\n");

    scanf("%d",&time);

    switch (time)
    {
        case 1:
            printf("Good Morning \n");
            printf("Enjoy the Breakfast \n");
        //break;

        case 2:
            printf("Good afternoon \n");
            printf("Enjoy the Lunch \n");
        //break;

        case 3:
            printf("Good evening \n");
            printf("Enjoy your tea \n");
        break;

        case 4:
            printf("Enjoy dinner \n");
            printf("Good Night \n");
            printf("Have a nice sleep \n");
        break;
    
        default:
            printf("Invalid Case Number \n");
        break;
    }  */

//////////////////////////////////////////////////////////////////////



    
    char chr_time;

    printf("Enter 'm' ; Morning \n");
    printf("Enter 'n' ; Noon \n");
    printf("Enter 'e' ; Evening \n");
    printf("Enter 'g' ; Night\n");

    scanf("%c",&chr_time);

    switch (chr_time)
    {
        case 'm':
            printf("Good Morning \n");
            printf("Enjoy the Breakfast \n");
        break;

        case 'n':
            printf("Good afternoon \n");
            printf("Enjoy the Lunch \n");
        break;

        case 'e':
            printf("Good evening \n");
            printf("Enjoy your tea");
        break;

        case 'g':
            printf("Enjoy dinner \n");
            printf("Good Night \n");
            printf("Have a nice sleep \n");
        break;
    
        default:
            printf("Invalid Case Number \n");
        break;
    } 


//////////////////////////////////////////////////////////////////////
/*
 // Program to create a simple calculator

    char operation;
    double n1, n2;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operation);
    printf("Enter two operands: ");
    scanf("%lf %lf",&n1, &n2);

    switch(operation)
    {
        case '+':
            printf("%.1lf + %.1lf = %.1lf",n1, n2, n1+n2);
            break;

        case '-':
            printf("%.1lf - %.1lf = %.1lf",n1, n2, n1-n2);
            break;

        case '*':
            printf("%.1lf * %.1lf = %.1lf",n1, n2, n1*n2);
            break;

        case '/':
            printf("%lf / %lf = %lf",n1, n2, n1/n2);
            break;

        // operator doesn't match any case constant +, -, *, /
        default:
            printf("Error! operator is not correct");
    }
*/

    return 0;
}
