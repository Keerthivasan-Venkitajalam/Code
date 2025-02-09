//Write a C program to find the special character in the string
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i, specialChar = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // read string

    for(i = 0; str[i] != '\0'; ++i) {
        // check if the character is not alphanumeric
        if(!isalnum(str[i])) {
            specialChar = 1;  // set the flag
            break;
        }
    }

    if(specialChar) {
        printf("The string contains a special character.\n");
    } else {
        printf("The string does not contain any special characters.\n");
    }

    return 0;
}
