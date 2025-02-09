// C program to find the length of string input by user with and without using in-built functions

#include <stdio.h>
#include <string.h>

int LenWithoutFunc(char str[]) {
    int length = 0;

    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char str[] = {'a', 'p', 'p', 'l', 'e', '\0'}; 

    int LenWithFunc = strlen(str);
    printf("Length using strlen: %d\n", LenWithFunc);

    int LengthWithoutFunc = LenWithoutFunc(str);
    printf("Length without using strlen: %d\n", LengthWithoutFunc);

    return 0;
}

