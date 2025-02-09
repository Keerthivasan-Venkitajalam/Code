#include <stdio.h>
#include <string.h>

typedef struct {
    int day;
    int month;
    int year;
} Date;

int isValidDate(Date date) {
    // Check the validity of day, month and year
    if(date.year < 2001 || date.year > 2024) return 0;
    if(date.month < 1 || date.month > 12) return 0;
    if(date.day < 1 || date.day > 31) return 0;

    // Check the validity of day in each month
    if(date.month == 2) {
        if((date.year % 4 == 0 && date.year % 100 != 0) || date.year % 400 == 0) {
            if(date.day > 29) return 0;
        } else {
            if(date.day > 28) return 0;
        }
    } else if(date.month == 4 || date.month == 6 || date.month == 9 || date.month == 11) {
        if(date.day > 30) return 0;
    }

    return 1;
}

int getMonth(char *month) {
    char months[12][4] = {"jan", "feb", "mar", "apr", "may", "jun", "jul", "aug", "sep", "oct", "nov", "dec"};
    for(int i = 0; i < 12; i++) {
        if(strcmp(months[i], month) == 0) {
            return i + 1;
        }
    }
    return -1;
}

int main() {
    char dateStr[12];
    printf("Enter the date in the format dd-mmm-yyyy: ");
    scanf("%s", dateStr);
    
    Date date;
    char month[4];
    sscanf(dateStr, "%d-%[^-]-%d", &date.day, month, &date.year);
    date.month = getMonth(month);

    if(isValidDate(date)) {
        printf("The date is valid.\n");
    } else {
        printf("The date is invalid.\n");
    }

    return 0;
}
