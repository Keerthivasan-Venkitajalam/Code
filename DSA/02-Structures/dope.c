#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "structure.h"

void printMovieQ1(movieQ1* m) {
  printf("Movie Details:\n");
  printf("--------------\n");
  printf("Title: %s, Year: %d, Average Rating: %.2f\n", m->title, m->year, m->avgRating);
}

movieQ1* createMovieQ1() {
    movieQ1* newMovie = (movieQ1*)malloc(sizeof(movieQ1));
    if (newMovie == NULL) {
        exit(EXIT_FAILURE);
    }
    newMovie->year = 0;
    newMovie->avgRating = 0.0;
    return newMovie;
}

void readMovieQ1(movieQ1* m) {
    char title[51];
    fgets(title, sizeof(title), stdin);
    title[strcspn(title, "\n")] = '\0';
    strcpy(m->title, title);

    scanf("%d", &m->year);
    scanf("%f", &m->avgRating);
}

movieQ2* createMovieQ2() {
    movieQ2* newMovie = (movieQ2*)malloc(sizeof(movieQ2));
    if (newMovie == NULL) {
        exit(EXIT_FAILURE);
    }
    newMovie->year = 0;
    newMovie->ratingsCount = 0;
    newMovie->ratings = NULL;
    return newMovie;
}

void readMovieQ2(movieQ2* m) {
    char title[51];
    fgets(title, sizeof(title), stdin);
    title[strcspn(title, "\n")] = '\0';
    strcpy(m->title, title);

    scanf("%d", &m->year);
    scanf("%d", &m->ratingsCount);
    m->ratings = (float*)malloc(m->ratingsCount * sizeof(float));
    for(int i = 0; i < m->ratingsCount; i++) {
        scanf("%d", &m->ratings[i]);
    }
}

void printMovieQ2(movieQ2* m) {
    printf("Title: %s\n", m->title);
    printf("Year of Release: %d\n", m->year);
}

float averageRating(movieQ2* m) {
    int sum = 0;
    for(int i = 0; i < m->ratingsCount; i++) {
        sum += m->ratings[i];
    }
    return (float)sum / m->ratingsCount;
}

date getDate() {
    date d;
    char month[4];
    scanf("%d-%[^-]-%d", &d.day, month, &d.year);
    if(strcmp(month, "Jan") == 0) d.month = 1;
    else if(strcmp(month, "Feb") == 0) d.month = 2;
    // Continue for all months
    return d;
}

int isValidDate(date d) {
    if(d.year < 1900 || d.year > 2050) return 0;
    if(d.month < 1 || d.month > 12) return 0;
    if(d.day < 1 || d.day > 31) return 0;
    // Add more checks for each month
    return 1;
}

void printDate(date d) {
    printf("%02d/%02d/%d\n", d.day, d.month, d.year);
}

movieQ4* createMovieQ4() {
    movieQ4* newMovie = (movieQ4*)malloc(sizeof(movieQ4));
    if (newMovie == NULL) {
        exit(EXIT_FAILURE);
    }
    newMovie->ratingsCount = 0;
    newMovie->ratings = NULL;
    return newMovie;
}

void readMovieQ4(movieQ4* m) {
    char title[51];
    fgets(title, sizeof(title), stdin);
    title[strcspn(title, "\n")] = '\0';
    strcpy(m->title, title);

    m->releaseDate = getDate();

    scanf("%d", &m->ratingsCount);
    m->ratings = (float*)malloc(m->ratingsCount * sizeof(float));
    for(int i = 0; i < m->ratingsCount; i++) {
        scanf("%f", &m->ratings[i]);
    }
}

void printMovieQ4(movieQ4* m) {
    printf("Title: %s\n", m->title);
    printDate(m->releaseDate);
    for(int i = 0; i < m->ratingsCount; i++) {
        printf("Rating: %.2f\n", m->ratings[i]);
    }
}

int isEligible(movieQ4* m) {
    // Assuming a movie is eligible for nominations if it has at least one rating of 5.0
    for(int i = 0; i < m->ratingsCount; i++) {
        if(m->ratings[i] == 5.0) {
            return 1;
        }
    }
    return 0;
}

movieQ5* createMovieQ5() {
    movieQ5* newMovie = (movieQ5*)malloc(sizeof(movieQ5));
    if (newMovie == NULL) {
        exit(EXIT_FAILURE);
    }
    newMovie->ratingsCount = 0;
    newMovie->ratings= NULL;
    return newMovie;
}

void readMovieQ5(movieQ5* m) {
    char title[51];
    fgets(title, sizeof(title), stdin);
    title[strcspn(title, "\n")] = '\0';
    strcpy(m->title, title);

    m->releaseDate = getDate();

    scanf("%d", &m->ratingsCount);
    m->ratings = (rating*)malloc(m->ratingsCount * sizeof(rating));
    for(int i = 0; i < m->ratingsCount; i++) {
        scanf("%s %f", m->ratings[i].username, &m->ratings[i].value);
    }
}
void printMovieQ5(movieQ5* m) {
    printf("Title: %s\n", m->title);
    printDate(m->releaseDate);
    for(int i = 0; i < m->ratingsCount; i++) {
        printf("Username: %s, Rating: %.2f\n", m->ratings[i].username, m->ratings[i].value);
    }
}

char* highestRatingUser(movieQ5* m) {
    int highestRatingIndex = 0;
    for(int i = 1; i < m->ratingsCount; i++) {
        if(m->ratings[i].value > m->ratings[highestRatingIndex].value) {
            highestRatingIndex = i;
        }
    }
    return m->ratings[highestRatingIndex].username;
}

intArray* createIntArray(int n) {
    intArray* newArray = (intArray*)malloc(sizeof(intArray));
    if (newArray == NULL) {
        exit(EXIT_FAILURE);
    }
    newArray->size = n;
    newArray->start = (int*)malloc(n * sizeof(int));
    return newArray;
}

void readIntArray(intArray* A) {
    for(int i = 0; i < A->size; i++) {
        scanf("%d", &A->start[i]);
    }
}

void printIntArray(intArray* A) {
    for(int i = 0; i < A->size; i++) {
        printf("%d ", A->start[i]);
    }
    printf("\n");
}

ratingArray* createRatingArray(int r) {
    ratingArray* newArray = (ratingArray*)malloc(sizeof(ratingArray));
    if (newArray == NULL) {
        exit(EXIT_FAILURE);
    }
    newArray->size = r;
    newArray->start = (rating*)malloc(r * sizeof(rating));
    return newArray;
}

void readRatingArray(ratingArray* R) {
    for(int i = 0; i < R->size; i++) {
        scanf("%s %f", R->start[i].username, &R->start[i].value);
    }
}

void printRatingArray(ratingArray* R) {
    for(int i = 0; i < R->size; i++) {
        printf("Username: %s, Rating: %.2f\n", R->start[i].username, R->start[i].value);
    }
}

movie* createMovie() {
    movie* newMovie = (movie*)malloc(sizeof(movie));
    if (newMovie == NULL) {
        exit(EXIT_FAILURE);
    }
    return newMovie;
}

void readMovie(movie* m) {
    char title[51]; 
    fgets(title, sizeof(title), stdin);
    title[strcspn(title, "\n")] = '\0';
    strcpy(m->title, title);

    m->releaseDate = getDate();

    readRatingArray(m->ratings);
}

void printMovie(movie* m) {
    printf("Title: %s\n", m->title);
    printDate(m->releaseDate);
    printRatingArray(m->ratings);
}

rating* highestRating(movie* m) {
    int highestRatingIndex = 0;
    for(int i = 1; i < m->ratings->size; i++) {
        if(m->ratings->start[i].value > m->ratings->start[highestRatingIndex].value) {
            highestRatingIndex = i;
        }
    }
    return &m->ratings->start[highestRatingIndex];
}

movieArray* createMovieArray(int n) {
    movieArray* newArray = (movieArray*)malloc(sizeof(movieArray));
    if (newArray == NULL) {
        exit(EXIT_FAILURE);
    }
    newArray->size = n;
    newArray->start = (movie*)malloc(n * sizeof(movie));
    return newArray;
}

void readMovieArray(movieArray* M) {
    for(int i = 0; i < M->size; i++) {
        readMovie(&M->start[i]);
    }
}

void printMovieArray(movieArray* M) {
    for(int i = 0; i < M->size; i++) {
        printMovie(&M->start[i]);
    }
}

void printMoviesAbove8(movieArray* M) {
    for(int i = 0; i < M->size; i++) {
        float avgRating = 0;
        for(int j = 0; j < M->start[i].ratings->size; j++) {
            avgRating += M->start[i].ratings->start[j].value;
        }
        avgRating /= M->start[i].ratings->size;
        if(avgRating > 8) {
            printf("%s\n", M->start[i].title);
        }
    }
}

moviePtrArray* createMoviePointerArray(int n) {
    moviePtrArray* newArray = (moviePtrArray*)malloc(sizeof(moviePtrArray));
    if (newArray == NULL) {
        exit(EXIT_FAILURE);
    }
    newArray->size = n;
    newArray->start = (movie**)malloc(n * sizeof(movie*));
    return newArray;
}

void readMoviePointerArray(moviePtrArray* M) {
    for(int i = 0; i < M->size; i++) {
        M->start[i] = createMovie();
        readMovie(M->start[i]);
    }
}

void printMoviePointerArray(moviePtrArray* M) {
    for(int i = 0; i < M->size; i++) {
        printMovie(M->start[i]);
    }
}

void printMoviesAfter2000(moviePtrArray* M) {
    for(int i = 0; i < M->size; i++) {
        if(M->start[i]->releaseDate.year > 2000) {
            printf("%s\n", M->start[i]->title);
        }
    }
}