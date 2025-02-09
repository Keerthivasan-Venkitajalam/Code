#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main() {
    int i, j;
    srand(time(0));  // Initialize random number generator.

    while(1) {
        // Generate a random ASCII value for an uppercase alphabet.
        char ch = 'A' + (rand() % 26);

        // Generate a random position on the screen.
        int x = rand() % 80;
        int y = rand() % 25;

        // Clear the screen.
        system("cls");

        // Print spaces before the character.
        for(i = 0; i < y; i++)
            printf("\n");
        for(j = 0; j < x; j++)
            printf(" ");

        // Print the character.
        printf("%c", ch);

        // Delay to create the flying effect.
        Sleep(100);
    }

    return 0;
}
