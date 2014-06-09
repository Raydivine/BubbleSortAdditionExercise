#include <stdio.h>
#include "IntegerBubblesort.h"


int integerCompare(void *v1, void *v2) {

	int  *A; 
	int  *B; 
	
	A= (int *)v1;
	B= (int *)v2;
	
	
     if (*A > *B )
	 return 1; 
	 
     else if( *A ==*B )
         return 0;
	 
     else 
        return -1;
}


void integerSwap(void *array, int index1, int index2) {

	int temp ;
	
	temp=((int *)array)[index2];
	((int *)array)[index2]=((int *)array)[index1];
	((int *)array)[index1]=temp;
}
