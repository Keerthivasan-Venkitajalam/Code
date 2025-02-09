//Write a C Program to check whether the entered character is an uppercase/lowercase vowel or an uppercase/lowercase consonant.
#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("%c is an uppercase vowel.\n", ch);
    }
    else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("%c is a lowercase vowel.\n", ch);
    }
    
    else if (ch >= 'A' && ch <= 'Z') { 
        printf("%c is an uppercase consonant.\n", ch);
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("%c is a lowercase consonant.\n", ch);
    }
    else {
        printf("%c is not a letter.\n", ch);
    }

    return 0;
}
