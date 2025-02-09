//Write a C program to get a string from the user and slice the string from the start and stop index from the user
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int start, stop;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // read string

    printf("Enter the start index: ");
    scanf("%d", &start);  // read start index

    printf("Enter the stop index: ");
    scanf("%d", &stop);  // read stop index

    // Ensure valid indices
    if(start < 0 || stop >= strlen(str) || start > stop) {
        printf("Invalid indices.\n");
        return 1;
    }

    printf("Sliced string: ");
    for(int i = start; i <= stop; i++) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
