#include <stdio.h>
#include "GenericBubblesort.h"

int compare(void *v1, void *v2) {   //Sub Fuction to compare the 2 value

	int  *A; 
	int  *B; 
	
	A= (int *)v1;
	B= (int *)v2;
	
	return *A>*B ? 1 : *A==*B ? 0 : -1;  // if 1st number is larger than 2nd number, will return 1 
}

void swap(void *array, void *index1, void *index2) { //Sub function to swap the 2 value

	int temp ;
	
	temp=((int *)array)[index2];
	((int *)array)[index2]=((int *)array)[index1];
	((int *)array)[index1]=temp;
}


void genericSingleBubbleSort (  
	void *array, 
	int size, 
	int length, 
	int (*compare)(void *v1, void *v2),
	void (*swap)(void *array, void *index1, void *index2)
							 )

								{                      // code start this line
									  compare(v1, v2);  //call compare and check what it return 
										while(1)      //if the compare function return 1 then means the array dont have to swap
										{   
											int i;
												for(i=length-1; i>length-size; i--) 
												{
													if (array[i-1] > array[i])
													swap( array, i, (i-1) );		
												}
										}
							    }




void genericBubbleSort(
	void *array,
	int length, 
	int (*compare)(void *v1, void *v2),
	void (*swap)(void *array, void *index1, void *index2)
					  )
						
						{  //code start here
						
							int j;
							for(j = length; j > 1; j--) 
							{
								void genericSingleBubbleSort (  
								&array, 
								j, 
								length, 
								(&compare),
							   (&swap)		
							}
						
						}
