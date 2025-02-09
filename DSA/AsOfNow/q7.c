#include <stdio.h>

int isValidDate(int d, int m, int y) {
    // Check the validity of day, month and year
    if(y < 2001 || y > 2024) return 0;
    if(m < 1 || m > 12) return 0;
    if(d < 1 || d > 31) return 0;

    // Check the validity of day in each month
    if(m == 2) {
        if((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
            if(d > 29) return 0;
        } else {
            if(d > 28) return 0;
        }
    } else if(m == 4 || m == 6 || m == 9 || m == 11) {
        if(d > 30) return 0;
    }

    return 1;
}

int main() {
    int d, m, y;
    printf("Enter day, month and year: ");
    scanf("%d %d %d", &d, &m, &y);
    
    if(isValidDate(d, m, y)) {
        printf("The date is valid.\n");
    } else {
        printf("The date is invalid.\n");
    }

    return 0;
}
