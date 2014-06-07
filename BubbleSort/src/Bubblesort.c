#include <stdio.h>
#include "Bubblesort.h"


void swap(int array[], int index1, int index2) {


	int temp = array[index2];	
	array[index2] = array[index1];
	array[index1] = temp;
}



void singleBubblesort(int array[], int size, int length) {

	int i;
	
	for(i = length - 1; i > length - size; i--) 
	{
		if (array[i-1] > array[i])
			swap( array, i, (i-1) );
	}
}



void bubblesort(int array[], int length) {

	int j;
	
	for(j = length; j > 1; j--) 
	{
		singleBubblesort(array, j, length);			
	}
}