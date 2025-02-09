// Logical operators

/*          &&   AND
            ||   OR
            !    NOT

            && AND
        a   b   a && b
        0   0   0
        0   1   0
        1   1   1

            || OR

        a   b   a || b
        0   0   0
        0   1   1
        1   1   1   

            ! NOT

        a   !a
        0   1
        1   0    
        */ 


#include<stdio.h>

int main()
{
    // AND &&
    printf("AND\n");

    printf(" check (4>3) && (5>10) ; %d \n", (4>3) && (5>10));
    printf(" check (2>3) && (5>10) ; %d \n", (2>3) && (5>10));
    printf(" check (4>3) && (15>10) ; %d \n", (4>3) && (15>10));

    // OR ||

    printf(" check (4>3) || (15>10) ; %d \n", (4>3) || (15>10));
    printf(" check (2>3) || (15>10) ; %d \n", (2>3) || (15>10));
    printf(" check (2>3) || (5>10) ; %d \n", (2>3) || (5>10));
    
    // NOT !

    printf(" check !(2>3) ; %d \n", !(2>3));
    printf(" check !(4>3) ; %d \n", !(4>3));

    return 0;
}