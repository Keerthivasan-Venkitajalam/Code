#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

int main() { 
    srand(time(NULL)); 
    int screenWidth = 80; 
    int screenHeight = 24; 
    char screen[screenHeight][screenWidth]; 

    for (int i = 0; i < screenHeight; i++) { 
        for (int j = 0; j < screenWidth; j++) { 
            screen[i][j] = ' '; 
        } 
    } 

    while (1) { 
        char ch = 'A' + rand() % 26; 
        int x = rand() % screenWidth; 
        int y = rand() % screenHeight; 

        screen[y][x] = ch; 

        system("cls"); 

        for (int i = 0; i < screenHeight; i++) { 
            for (int j = 0; j < screenWidth; j++) { 
                putchar(screen[i][j]); 
            } 
            printf("\n"); 
        } 

        screen[y][x] = ' '; 

        Sleep(100000); 
    } 

    return 0; 
}
