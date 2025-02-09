/*
 **************************** DO NOT EDIT THIS FILE ****************************
 ************ ANY CHANGES MADE WILL BE DISCARDED BEFORE EVALUATION *************

 * Question:
	Read the details of n movies and store them using an array of structure pointers.
	Use the structure 'moviePtrArray' defined in structure.h.
	Print the details of movies stored in the array of structure pointers.
	Also, print the titles of the movies released after 2000.
 * Instructions:
	Complete the function/s
		createMoviePointerArray()
		readMoviePointerArray()
		printMoviePointerArray()
		printMoviesAfter2000()
	in the file structure.c.
 * Execution Example/s:
	Enter the number of movies: 3
	 Enter the details of 3 movies as follows:
	 For each movie, in the first line, give the title.
	 In the next line, give the release date in the format dd-mmm-yyyy.
	 In the next line, give the value of r, which is the number of ratings.
	 In the next r lines, give r ratings as username and rating value, separated by space.
	My Movie 1
	25-apr-2018
	3
	user1 7.6
	user2 8
	user3 7.5
	My Movie 2
	04-feb-1998
	2
	user8 8.4
	user9 9.56
	My Movie 3
	14-nov-2012
	4
	user8 8.4
	user9 8.56
	user1 7.5
	user3 7.9

	Details:
	---------------
	Title: My Movie 1, Release Date: 25/04/2018
	Ratings:
	user1 7.60
	user2 8.00
	user3 7.50
	Title: My Movie 2, Release Date: 04/02/1998
	Ratings:
	user8 8.40
	user9 9.56
	Title: My Movie 3, Release Date: 14/11/2012
	Ratings:
	user8 8.40
	user9 8.56
	user1 7.50
	user3 7.90
	Movies released after 2000:
	My Movie 1
	My Movie 3

*/
#include <stdio.h>

#include "structure.h"

int main()
{
	int n;

	printf("Enter the number of movies: ");
	scanf("%d%*c", &n);
	
	moviePtrArray* M = createMoviePointerArray(n);

	printf("Enter the details of %d movies as follows: \n", n);
	printf(" For each movie, in the first line, give the title. \n");
	printf(" In the next line, give the release date in the format dd-mmm-yyyy. \n");
	printf(" In the next line, give the value of r, which is the number of ratings. \n");
	printf(" In the next r lines, give r ratings as username and rating value, separated by space. \n");
	readMoviePointerArray(M);

	printf("\nDetails:\n");
	printf("---------------\n");
	printMoviePointerArray(M);

	printf("Movies released after 2000:\n");
	printMoviesAfter2000(M);

	return 0;
}
