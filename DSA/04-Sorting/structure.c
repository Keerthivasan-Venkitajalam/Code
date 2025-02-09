/*
 **************************** DO NOT EDIT THIS FILE ****************************
 ************ ANY CHANGES MADE WILL BE DISCARDED BEFORE EVALUATION *************
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "structure.h"

/************************************************************************/
/** 
	A function to read n integers from the user,
		and store them in an array A.
	@param A starting address of the array
	@param n number of elements in the array
*/
void readArray(int* A, int n) {
    for(int i = 0; i < n; i++) {
		scanf("%d%*c", (A+i));
	}
}

/** 
	A function to print the elements in an integer array.
	@param A starting address of the array
	@param n number of elements in the array
*/
void printArray(int* A, int n) {
	if(n > 0) {
		printf("[");
		for(int i = 0; i < n-1; i++) {
			printf("%d ", A[i]);
		}
		printf("%d]\n", A[n-1]);
	}
	
}

/** 
	A function to read a date as a string in the format dd-mmm-yyyy,
		extract day, month and year, and store them in a structure variable.
	@return the date
*/
date getDate() {
	date d;
    char* str = (char*)malloc(12 * sizeof(char)); 
    char* day = (char*)malloc(3 * sizeof(char)); 
    char* month = (char*)malloc(4 * sizeof(char)); 
    char* year = (char*)malloc(5 * sizeof(char)); 

    scanf("%s%*c", str);

   	strncpy(day, str, 2);
   	strncpy(month, str+3, 3);
   	strncpy(year, str+7, 4);

    d.day = atoi(day);
    d.year = atoi(year);

    if (strcmp(month, "jan") == 0) d.month = 1;
    else if (strcmp(month, "feb") == 0) d.month = 2;
    else if (strcmp(month, "mar") == 0) d.month = 3;
    else if (strcmp(month, "apr") == 0) d.month = 4;
    else if (strcmp(month, "may") == 0) d.month = 5;
    else if (strcmp(month, "jun") == 0) d.month = 6;
    else if (strcmp(month, "jul") == 0) d.month = 7;
    else if (strcmp(month, "aug") == 0) d.month = 8;
    else if (strcmp(month, "sep") == 0) d.month = 9;
    else if (strcmp(month, "oct") == 0) d.month = 10;
    else if (strcmp(month, "nov") == 0) d.month = 11;
    else if (strcmp(month, "dec") == 0) d.month = 12;
	else d.month = 0;

    return d;
}

/** 
	A function to print a given date in the format dd/mm/yyyy.
	@param d the date
*/
void printDate(date d) {
		printf("%02d/%02d/%d", d.day, d.month, d.year);

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
	ratingArray* A = malloc(sizeof(ratingArray));
	A->size = r;
	A->start = malloc(sizeof(float) * r);
	return A;
}

/** 
	A function to read n ratings from the user,
		and store them in an array represented as a structure.
	@param R the rating array represented as a structure
*/
void readRatingArray(ratingArray* R) {
	for(int i = 0; i < R->size; i++) {
		scanf("%f%*c", R->start+i);
	}
}

/************************************************************************/

/** 
	A function to create a new movie variable.
	@return the starting address of the new movie variable
*/
movie* createMovie() {
	movie* newMovie = malloc(sizeof(movie));
	return newMovie;
}

/** 
	A function to read the title, release date, 
		number of ratings and ratings of a movie,
		and store it as a structure.
	@param m the starting address of the movie variable
*/
void readMovie(movie* m) {
	int n;
	m->title = malloc(sizeof(char)*50);
	printf("Title: ");
	scanf("%[^\n]%*c", m->title);
	printf("Release date (dd-mmm-yyyy): ");
	m->releaseDate = getDate();
	printf("Number of ratings: ");
	scanf("%d%*c", &n);
	printf("Enter %d ratings, separated by space.\n", n);
	m->ratings = createRatingArray(n);
	readRatingArray(m->ratings);
	m->avgRating = averageRating(m);
}

/** 
	A function to print the details of a movie.
	@param m the starting address of the movie variable
*/
void printMovie(movie* m) {
	printf("|%.2f\t|",m->avgRating);
	printDate(m->releaseDate);
	printf("\t|%s\n", m->title);
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
	movieArray* mov = malloc(sizeof(movieArray));	
	mov->size = n;
	mov->start = malloc(n * sizeof(movie));
	return mov; 
}

/** 
	A function to read the details of n movies, 
		and store them in an array represented as a structure.
	@param M the array of movies represented as a structure
*/
void readMovieArray(movieArray* M) {
	for(int i = 0; i < M->size; i++) {
		printf("\nMovie %d:\n", i+1);
		readMovie(M->start+i);
	}
}

/** 
	A function to print the details of movies 
		stored in an array represented as a structure.
	@param M the array of movies represented as a structure
*/
void printMovieArray(movieArray* M) {
	printf("|Rating\t|Release Date\t|Title\n");
	printf("-----------------------------------------------\n");
	for(int i = 0; i < M->size; i++) {
		printMovie(M->start+i);
	}
	printf("-----------------------------------------------\n");
}


/************************************************************************/


