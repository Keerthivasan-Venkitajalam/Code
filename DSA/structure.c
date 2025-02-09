/*
 ************ COMPLETE THE FOLLOWING FUNCTIONS AS INSTRUCTED *************
 *********** YOU ARE NOT ALLOWED TO ADD ANY MORE HEADER FILES ************
 ***** REFER THE EXAMPLE PROGRAM GIVEN FOR READING AND WRITING DATA ******
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "structure.h"

/************************************************************************/

/** 
	A function to create a new movie variable,
		and initialize year of release and average rating to 0.
	@return the starting address of the new movie variable
*/
movieQ1* createMovieQ1() {
	movieQ1* m=(movieQ1*)malloc(sizeof(movieQ1));
	m->title = NULL; 
    m->year = 0;     
    m->avgRating = 0.0;
	return m; // Replace the return value here as required
}

/** 
	A function to read the title, year of release 
		and the average rating of a movie,
		and store it as a structure.
	@param m the starting address of the movie variable
*/
void readMovieQ1(movieQ1* m) {
	// Do not use any printf() statements in this function.
	// Allocate space for 50 characters to store the title before reading it.
	m->title = (char*)malloc(50 * sizeof(char));
    scanf("%[^\n]%*c", m->title);
    scanf("%d%*c", &(m->year));
    scanf("%f%*c", &(m->avgRating));
}

/** 
	A function to print the title, year of release 
		and the average rating of a movie.
	@param m the starting address of the movie variable
*/
void printMovieQ1(movieQ1* m) {
	// See the sample execution given and match the printf() statements exactly with it (including spaces).
	// Note that, 'Rating' value is printed with two decimal places only. 
	printf("Title: %s, ", m->title);
    printf("Year: %d, ", m->year);
    printf("Average Rating: %.2f\n", m->avgRating);
}

/************************************************************************/

/** 
	A function to create a new movie variable,
		and initialize year and ratings count to 0.
	@return the starting address of the new movie variable
*/
movieQ2* createMovieQ2() {
	movieQ2* m = (movieQ2*)malloc(sizeof(movieQ2));
    m->title = NULL;
    m->year = 0;
    m->ratingsCount = 0;
    m->ratings = NULL;
	return m; // Replace the return value here as required
}

/** 
	A function to read the title, year of release, 
		number of ratings and the ratings of a movie,
		and store it as a structure.
	@param m the starting address of the movie variable
*/
void readMovieQ2(movieQ2* m) {
	// Do not use any printf() statements in this function.
	// Allocate enough space to store the ratings before reading it.
	m->title = (char*)malloc(50 * sizeof(char));
    scanf("%[^\n]%*c", m->title);
    scanf("%d%*c", &(m->year));
    scanf("%d%*c", &(m->ratingsCount));
    m->ratings = (float*)malloc(m->ratingsCount * sizeof(float));
    for(int i = 0; i < m->ratingsCount; i++) {
        scanf("%f%*c", &(m->ratings[i]));
    }
}

/** 
	A function to print the title and year of release of a movie.
	@param m the starting address of the movie variable
*/
void printMovieQ2(movieQ2* m) {
	// See the sample execution given and match the printf() statements exactly with it (including spaces).
	// Note that, 'Rating' value is printed with two decimal places only. 
	printf("Title: %s, ", m->title);
    printf("Year: %d, ", m->year);
}

/** 
	A function to find the average rating of a movie.
	@param m the starting address of the movie variable
	@return the average rating of the movie
*/
float averageRating(movieQ2* m) {
	float Total = 0.0;
    for(int i = 0; i < m->ratingsCount; i++) {
        Total += m->ratings[i];
    }
	return Total / m->ratingsCount; // Replace the return value here as required
}

/************************************************************************/

/** 
	A function to read a date as a string in the format dd-mmm-yyyy,
		extract day, month and year, and store them in a structure variable.
	@return the date
*/
date getDate() {
	date d;
	char month[4];
    scanf("%d-%[^-]-%d%*c", &(d.day), month, &(d.year));
    if(strcmp(month, "jan") == 0) d.month = 1;
    else if(strcmp(month, "feb") == 0) d.month = 2;
    else if(strcmp(month, "mar") == 0) d.month = 3;
    else if(strcmp(month, "apr") == 0) d.month = 4;
    else if(strcmp(month, "may") == 0) d.month = 5;
    else if(strcmp(month, "jun") == 0) d.month = 6;
    else if(strcmp(month, "jul") == 0) d.month = 7;
    else if(strcmp(month, "aug") == 0) d.month = 8;
    else if(strcmp(month, "sep") == 0) d.month = 9;
    else if(strcmp(month, "oct") == 0) d.month = 10;
    else if(strcmp(month, "nov") == 0) d.month = 11;
    else if(strcmp(month, "dec") == 0) d.month = 12;
	return d; 
}

/** 
	A function to check whether a given date is a valid date 
		between the years 1900 and 2050 (both included).
	@param d the date
	@return 1 if d is a valid date, 0 otherwise
*/
int isValidDate(date d) {
	if(d.day < 1 || d.day > 31) return 0;
	if(d.year < 1900 || d.year > 2050) return 0;
    if(d.month < 1 || d.month > 12) return 0;
    if(d.month == 2) {
        if(d.year % 400 == 0 || (d.year % 100 != 0 && d.year % 4 == 0)) {
            if(d.day > 29) return 0;
        } else {
            if(d.day > 28) return 0;
        }
    } else if(d.month == 4 || d.month == 6 || d.month == 9 || d.month == 11) {
        if(d.day > 30) return 0;
    }
	return 1; // Replace the return value here as required
}

/** 
	A function to print a given date in the format dd/mm/yyyy.
	@param d the date
*/
void printDate(date d) {
	// Note that, day and month are printed with two places. Example: 01/02/2023 
	printf("%02d/%02d/%d", d.day, d.month, d.year);
}

/************************************************************************/

/** 
	A function to create a new movie variable,
		and initialize ratings count to 0.
	@return the starting address of the new movie variable
*/
movieQ4* createMovieQ4() {
	movieQ4* m = (movieQ4*)malloc(sizeof(movieQ4));
    m->title = NULL;
    m->releaseDate.day = 0;
    m->releaseDate.month = 0;
    m->releaseDate.year = 0;
    m->ratingsCount = 0;
    m->ratings = NULL;
	return m; // Replace the return value here as required
}

/** 
	A function to read the title, release date, 
		number of ratings and ratings of a movie,
		and store it as a structure.
	@param m the starting address of the movie variable
*/
void readMovieQ4(movieQ4* m) {
	// Do not use any printf() statements in this function.
	// Use getDate() function to read the release date.
	m->title = (char*)malloc(50 * sizeof(char));
    scanf("%[^\n]%*c", m->title);
    m->releaseDate = getDate();
    scanf("%d%*c", &(m->ratingsCount));
    m->ratings = (float*)malloc(m->ratingsCount * sizeof(float));
    for(int i = 0; i < m->ratingsCount; i++) {
        scanf("%f%*c", &(m->ratings[i]));
    }
}

/** 
	A function to print the title, release date (in the format dd/mm/yyyy)
		and the ratings of a movie.
	@param m the starting address of the movie variable
*/
void printMovieQ4(movieQ4* m) {
	//See the sample execution given and match the printf() statements exactly with it (including spaces).
	//Note that, ratings are printed with two decimal places only. 
	// Use printDate() function to print the release date.
	printf("Title: %s, ", m->title);
    printf("Release Date: ");
    printDate(m->releaseDate);
    printf("\nRatings: ");
    for(int i = 0; i < m->ratingsCount; i++) {
        printf("%.2f ", m->ratings[i]);
    }
    printf("\n");
}

/** 
	A function to check whether a movie is eligible for nominations. 
	@param m the movie
	@return 1 if m is eligible for nominations, 0 otherwise
*/
int isEligible(movieQ4* m) {
	return m->releaseDate.month <= 10;; // Replace the return value here as required
}

/************************************************************************/

/** 
	A function to create a new movie variable,
		and initialize ratings count to 0.
	@return the starting address of the new movie variable
*/
movieQ5* createMovieQ5() {
	movieQ5* m = (movieQ5*)malloc(sizeof(movieQ5));
    m->title = NULL;
    m->releaseDate.day = 0;
    m->releaseDate.month = 0;
    m->releaseDate.year = 0;
    m->ratingsCount = 0;
    m->ratings = NULL;
	return m; // Replace the return value here as required
}

/** 
	A function to read the title, release date, 
		number of ratings and ratings of a movie,
		and store it as a structure.
	@param m the starting address of the movie variable
*/
void readMovieQ5(movieQ5* m) {
	// Do not use any printf() statements in this function.
	// Allocate space for 20 characters to store each username before reading it.
	// Note that, username cannot have spaces in between. 
	m->title = (char*)malloc(50 * sizeof(char));
    scanf("%[^\n]%*c", m->title);
    m->releaseDate = getDate();
    scanf("%d%*c", &(m->ratingsCount));
    m->ratings = (rating*)malloc(m->ratingsCount * sizeof(rating));
    for(int i = 0; i < m->ratingsCount; i++) {
        m->ratings[i].username = (char*)malloc(20 * sizeof(char));
        scanf("%s %f%*c", m->ratings[i].username, &(m->ratings[i].value));
    }
}

/** 
	A function to print the title, 
		release date (in the format dd/mm/yyyy)
		and the ratings (username and rating value) of a movie.
	@param m the starting address of the movie variable
*/
void printMovieQ5(movieQ5* m) {
	//See the sample execution given and match the printf() statements exactly with it (including spaces).
	//Note that, rating values are printed with two decimal places only. 
	printf("Title: %s, ", m->title);
    printf("Release Date: ");
    printDate(m->releaseDate);
    printf("\nRatings:\n");
    for(int i = 0; i < m->ratingsCount; i++) {
        printf("%s %.2f\n", m->ratings[i].username, m->ratings[i].value);
    }
}

/** 
	A function to find the user who gave the highest rating for a movie.
	@param m the starting address of the movie variable
	@return the username of the user who gave the highest rating for the movie
*/
char* highestRatingUser(movieQ5* m) {
	int highestIndex = 0;
    for(int i = 1; i < m->ratingsCount; i++) {
        if(m->ratings[i].value > m->ratings[highestIndex].value) {
            highestIndex = i;
        }
    }
	return m->ratings[highestIndex].username; // Replace the return value here as required
}

/************************************************************************/

/** 
	A function to create an array of integers as a structure,
		allocate space for n integers, 
		assign the starting address of the array and the size of the array
		and return the array represented as a structure.
	@param n number of elements in the array
	@return the array represented as a structure
*/
intArray* createIntArray(int n) {
	intArray* A = (intArray*)malloc(sizeof(intArray));
    A->start = (int*)malloc(n * sizeof(int));
    A->size = n;
	return A; // Replace the return value here as required
}

/** 
	A function to read n integers from the user,
		and store them in an array represented as a structure.
	@param A the array represented as a structure
*/
void readIntArray(intArray* A) {
	// Do not use any printf() statements in this function.
	for(int i = 0; i < A->size; i++) {
        scanf("%d%*c", &(A->start[i]));
    }
}

/** 
	A function to print the elements in an array represented as a structure.
	The elements should be printed with a single space character 
		separating each element.
	After printing all the elements, add a newline.
	@param A the array represented as a structure
*/
void printIntArray(intArray* A) {
	//See the sample execution given and match the printf() statements exactly with it (including spaces).
	for(int i = 0; i < A->size; i++) {
        printf("%d ", A->start[i]);
    }
    printf("\n");
}

/************************************************************************/

/** 
	A function to create an array of ratings as a structure,
		allocate space for r ratings (including username and rating value), 
		assign the starting address of the array and the size of the array
		and return the array represented as a structure.
	@param r number of ratings
	@return the rating array represented as a structure
*/
ratingArray* createRatingArray(int r) {
	ratingArray* R = (ratingArray*)malloc(sizeof(ratingArray));
    R->start = (rating*)malloc(r * sizeof(rating));
    R->size = r;
	return R; // Replace the return value here as required
}

/** 
	A function to read n ratings from the user,
		and store them in an array represented as a structure.
	@param R the rating array represented as a structure
*/
void readRatingArray(ratingArray* R) {
	// Do not use any printf() statements in this function.
	// Allocate space for 20 characters to store each username before reading it.
	// Note that, username cannot have spaces in between. 
	for(int i = 0; i < R->size; i++) {
        R->start[i].username = (char*)malloc(20 * sizeof(char));
        scanf("%s %f%*c", R->start[i].username, &(R->start[i].value));
    }
}

/** 
	A function to print the ratings stored in an array represented as a structure.
	@param R the rating array represented as a structure
*/
void printRatingArray(ratingArray* R) {
	//See the sample execution given and match the printf() statements exactly with it (including spaces).
	//Note that, rating values are printed with two decimal places only. 
	for(int i = 0; i < R->size; i++) {
        printf("%s %.2f\n", R->start[i].username, R->start[i].value);
    }
}

/************************************************************************/

/** 
	A function to create a new movie variable.
	@return the starting address of the new movie variable
*/
movie* createMovie() {
	movie* m = (movie*)malloc(sizeof(movie));
    m->title = NULL;
    m->releaseDate.day = 0;
    m->releaseDate.month = 0;
    m->releaseDate.year = 0;
    m->ratings = NULL;
	return m; // Replace the return value here as required
}

/** 
	A function to read the title, release date, 
		number of ratings and ratings of a movie,
		and store it as a structure.
	@param m the starting address of the movie variable
*/
void readMovie(movie* m) {
	// Do not use any printf() statements in this function.
	// Use readRatingArray() to read the ratings
	m->title = (char*)malloc(50 * sizeof(char));
    scanf("%[^\n]%*c", m->title);
    m->releaseDate = getDate();
    int r;
    scanf("%d%*c", &r);
    m->ratings = createRatingArray(r);
    readRatingArray(m->ratings);
}

/** 
	A function to print the details of a movie.
	@param m the starting address of the movie variable
*/
void printMovie(movie* m) {
	//See the sample execution given and match the printf() statements exactly with it (including spaces).
	// Use printRatingArray() to print the ratings
	printf("Title: %s, ", m->title);
    printf("Release Date: ");
    printDate(m->releaseDate);
    printf("\nRatings:\n");
    printRatingArray(m->ratings);
}

/** 
	A function to find the highest rating of a movie.
	@param m the starting address of the movie variable
	@return the highest rating of the movie
*/
rating* highestRating(movie* m) {
	int highestIndex = 0;
    for(int i = 1; i < m->ratings->size; i++) {
        if(m->ratings->start[i].value > m->ratings->start[highestIndex].value) {
            highestIndex = i;
        }
    }
	return &(m->ratings->start[highestIndex]); // Replace the return value here as required
}

/************************************************************************/

/** 
	A function to create an array of movies as a structure,
		allocate space for n movies, 
		assign the starting address of the array and the size of the array
		and return the array represented as a structure.
	@param n number of movies
	@return the movie array represented as a structure
*/
movieArray* createMovieArray(int n) {
	movieArray* M = (movieArray*)malloc(sizeof(movieArray));
    M->start = (movie*)malloc(n * sizeof(movie));
    M->size = n;
	return M; // Replace the return value here as required
}

/** 
	A function to read the details of n movies, 
		and store them in an array represented as a structure.
	@param M the array of movies represented as a structure
*/
void readMovieArray(movieArray* M) {
	// Do not use any printf() statements in this function.
	// Use readMovie() to read the details of a movie
	for(int i = 0; i < M->size; i++) {
        readMovie(&(M->start[i]));
    }
}

/** 
	A function to print the details of movies 
		stored in an array represented as a structure.
	@param M the array of movies represented as a structure
*/
void printMovieArray(movieArray* M) {
	//See the sample execution given and match the printf() statements exactly with it (including spaces).
	// Use printMovie() to print the details of a movie
	for(int i = 0; i < M->size; i++) {
        printMovie(&(M->start[i]));
    }
}

/** 
	A function to print the titles of the movies with average rating above 8.
	Print the titles in separate lines.
	@param M the array of movies represented as a structure
*/
void printMoviesAbove8(movieArray* M) {
	// See the sample execution given and match the printf() statements exactly with it (including spaces).
	// Print the titles in separate lines.
	// Recommended to write a function to find the average rating of a movie
	for(int i = 0; i < M->size; i++) {
        float Total = 0.0;
        for(int j = 0; j < M->start[i].ratings->size; j++) {
            Total += M->start[i].ratings->start[j].value;
        }
        float avgRating = Total / M->start[i].ratings->size;
        if(avgRating > 8) {
            printf("%s", M->start[i].title);
            printf("%s", "\n");
        }
    }
}

/************************************************************************/

/** 
 	A function to create an array of movie pointers as a structure,
		allocate space for n movie pointers, 
		assign the starting address of the array and the size of the array
		and return the array represented as a structure.
	@param n number of movies
	@return the movie pointer array represented as a structure
*/
moviePtrArray* createMoviePointerArray(int n) {
	moviePtrArray* M = (moviePtrArray*)malloc(sizeof(moviePtrArray));
    M->start = (movie**)malloc(n * sizeof(movie*));
    M->size = n;
	return M; // Replace the return value here as required
}

/** 
	A function to read the details of n movies, and store them in an array 
		of movie pointers represented as a structure.
	@param M the array of movie pointers represented as a structure
*/
void readMoviePointerArray(moviePtrArray* M) {
	// Do not use any printf() statements in this function.
	// Use readMovie() to read the details of a movie
	for(int i = 0; i < M->size; i++) {
        M->start[i] = createMovie();
        readMovie(M->start[i]);
    }
}

/** 
	A function to print the details of movies stored in an array 
		of movie pointers represented as a structure.
	@param M the array of movie pointers represented as a structure
*/
void printMoviePointerArray(moviePtrArray* M) {
	//See the sample execution given and match the printf() statements exactly with it (including spaces).
	// Use printMovie() to print the details of a movie
	for(int i = 0; i < M->size; i++) {
        printMovie(M->start[i]);
    }
}

/** 
	A function to print the titles of the movies released after 2000.
	Print the titles in separate lines.
	@param M the array of movies
*/
void printMoviesAfter2000(moviePtrArray* M) {
	printf("Movies released after 2000:\n");
    for(int i = 0; i < M->size; i++) {
        if(M->start[i]->releaseDate.year > 2000) {
            printf("%s\n", M->start[i]->title);
        }
    }
}

/************************************************************************/
