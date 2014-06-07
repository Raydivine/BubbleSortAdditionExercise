#ifndef GenericBubblesort_H
#define GenericBubblesort_H

void genericSingleBubbleSort (  
	void *array, 
	int size, 
	int length, 
	int (*compare)(void *v1, void *v2),
	void (*swap)(void *array, void *index1, void *index2));


void genericBubbleSort(
	void *array,
	int length, 
	int (*compare)(void *v1, void *v2),
	void (*swap)(void *array, void *index1, void *index2));
	
	
	
int compare(void *v1, void *v2);
void swap(void *array, void *index1, void *index2);

#endif // GenericBubblesort_H
