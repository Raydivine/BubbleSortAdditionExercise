#include "unity.h"
#include "GenericBubblesort.h"

void setUp(void)
{
}

void tearDown(void)
{
}

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

void test_genericSingleBubbleSort_given_array_4_2_should_swap_to_2_4(void){
     int array[]={4,2,5,7};
	 
	 int v1 =array[0];
	 int v2 =array[1];
	  
	 genericSingleBubbleSort (  &array, 
								4, 
								4, 
								(&compare), // point the compare function
								(&swap)    //point the swap function
							 );
							 
	TEST_ASSERT_EQUAL(2, array[0]);
	TEST_ASSERT_EQUAL(4, array[1]);	
    TEST_ASSERT_EQUAL(5, array[2]);
	TEST_ASSERT_EQUAL(7, array[3]);						 
								 
}


void test_genericBubbleSort_given_array_2_9_3_1_5_should_return_1_2_3_5_9(void){

  int array[]={2,9,3,1,5};
  
  genericBubbleSort ( &array,
                      5,
					  (&compare),
					  (&swap)	
					)
					
	TEST_ASSERT_EQUAL(1, array[0]);
	TEST_ASSERT_EQUAL(2, array[1]);	
    TEST_ASSERT_EQUAL(3, array[2]);
	TEST_ASSERT_EQUAL(5, array[3]);
    TEST_ASSERT_EQUAL(9, array[4]);

}

void genericSingleBubbleSort (  
	void *array, 
	int size, 
	int length, 
	int (*compare)(void *v1, void *v2),
	void (*swap)(void *array, void *index1, void *index2))

								{                      // code start this line
									  compare(v1, v2);
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
	void (*swap)(void *array, void *index1, void *index2))
						
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

