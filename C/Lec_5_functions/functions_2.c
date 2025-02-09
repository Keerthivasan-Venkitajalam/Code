// Program prints Namaste if  user is indian & Bonjour if the user is French

#include <stdio.h>

void namaste();
void bonjour();

int main()
{
    char ch;
    printf("Enter 'i' if indian and 'f' if frenceh: ");
    scanf("%c",&ch);

    if (ch=='i')
    {
        namaste();
    }
    else {
        bonjour();
    }

    return 0;
}

void namaste()
{
printf("Namaste ! \n");
}

void bonjour()
{
    printf("Bonjour ! \n");
}