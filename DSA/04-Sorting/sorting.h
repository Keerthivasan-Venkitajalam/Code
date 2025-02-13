/*
 **************************** DO NOT EDIT THIS FILE ****************************
 ************ ANY CHANGES MADE WILL BE DISCARDED BEFORE EVALUATION *************
*/

#ifndef SORTING_H
#define SORTING_H

#include "structure.h"

extern int comparisons;

extern int binarySearchCount;

extern void swap(int*, int*);

extern int binarySearch(int*, int, int);

extern int* merge(int*, int, int*, int);

extern void mergeSort(int*, int);

extern int recPartition(int*, int);

extern void quickSort(int*, int);

extern void insertionSort(int*, int);

extern void selectionSort(int*, int);

extern void hybridSort(int*, int);

extern void quickSortModified(int*, int);

extern void insertMovie(movie*, int);

extern void movieInsertionSort(movieArray*);

extern int minimumIndexMovie(movie*, int);

extern void movieSelectionSort(movieArray*);

#endif
