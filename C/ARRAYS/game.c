#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

int genRan(int min, int max) { 
    return rand() % (max - min + 1) + min; 
} 
int main() { 
    srand(time(NULL)); 
    const int minNumber = 1; 
    const int maxNumber = 100; 
    const int tarnum = genRan(minNumber, maxNumber); 
int guess; 
int attempts = 0; 
printf("Welcome to the Number Guessing Game!\n"); 
printf("I'm thinking of a number between %d and %d. Can you guess it?\n", minNumber, maxNumber); 
do { 
    printf("Enter your guess: "); 
    scanf("%d", &guess); 
attempts++; 
if (guess < tarnum) { 
    printf("Try a higher number.\n"); 
} 
else if (guess > tarnum) { 
    printf("Try a lower number.\n"); 
} 
else {  printf("Congratulations! You guessed the correct number (%d) in %d attempts.\n", tarnum,attempts); 
} 
} while 
(guess != tarnum); 
return 0; 
} 