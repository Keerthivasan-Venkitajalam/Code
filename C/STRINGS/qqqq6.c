//Write a C program to get a reverse of input string
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    int len, i, j;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // read string

    len = strlen(str);
    for(i = len - 1, j = 0; i >= 0; i--, j++) {
        rev[j] = str[i];
    }
    rev[j] = '\0';  // end of string

    printf("Reversed string: %s\n", rev);

    return 0;
}
