
// Print Hellow world n times

#include <stdio.h>

void printHello(int count);

main()
{  
    int n=5;
    printHello(n);

}

void printHello( int count)
{
    if (count==0)
    {
        return;
    }   
    printf("Hello!!!! \n");
    printHello(count-1);
}