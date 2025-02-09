//Write a C program to check whether user input string is a palindrome
#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 100
int isPalindrome(char str[]) {
    int i, j;
    int length = strlen(str);

    for (i = 0, j = length - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            return 0; // Not a palindrome
        }
    }
    return 1; // Palindrome
}

int main() {
    char input[MAX_LENGTH];

    printf("Enter a string: ");
    fgets(input, MAX_LENGTH, stdin);

    // Remove the newline character from the input
    input[strcspn(input, "\n")] = '\0';

    if (isPalindrome(input)) {
        printf("%s is a palindrome.\n", input);
    } else {
        printf("%s is not a palindrome.\n", input);
    }

    return 0;
}
