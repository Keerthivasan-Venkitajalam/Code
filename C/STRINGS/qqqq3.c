//C program to find the number of words in user input sentence
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, words = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);  
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i+1] != ' ')
            words++;
    }

    printf("Number of words: %d\n", words + 1);

    return 0;
}
