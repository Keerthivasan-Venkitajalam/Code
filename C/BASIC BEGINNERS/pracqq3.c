#include <stdio.h>

int main()
{
	char a;
    printf("enter a character:");
    scanf("%c",&a);
    if (a>=65 && a<=90){
        printf("character entered by user is uppercase");
    }
    else if (a>=97 && a<=122){
        printf("character entered bys user is lowercase");
    }
    else {
        printf("character entered is NOT an alphabet");
    }
    return 0;
}