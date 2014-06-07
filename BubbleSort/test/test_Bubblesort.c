#include "unity.h"
#include "Bubblesort.h"

void setUp(void) {}

void tearDown(void) {}

void test_swap_should_swap(void) {

	int array[] = {4, 3};
	swap(array, 0, 1);
	TEST_ASSERT_EQUAL(3, array[0]);
	TEST_ASSERT_EQUAL(4, array[1]);
}

void test_singleBubblesort_should_swap(void) {

	int array[] = {23, 12};
	singleBubblesort(array, 2, 2);
	TEST_ASSERT_EQUAL(12, array[0]);
	TEST_ASSERT_EQUAL(23, array[1]);
}

void test_singleBubbleSort_given_true_array_should_no_swap(void)
{
	int array[] = {3, 6};
	
	singleBubbleSort(array, 3, 6);
	
	TEST_ASSERT_EQUAL(3, array[0]);
	TEST_ASSERT_EQUAL(6, array[1]);
}


void test_bubblesort_should_swap(void) {

	int array[] = {8, 7, 6, 5, 4, 3, 2};
	bubblesort(array, 7);
	TEST_ASSERT_EQUAL(2, array[0]);
	TEST_ASSERT_EQUAL(3, array[1]);
	TEST_ASSERT_EQUAL(4, array[2]);
	TEST_ASSERT_EQUAL(5, array[3]);
	TEST_ASSERT_EQUAL(6, array[4]);
	TEST_ASSERT_EQUAL(7, array[5]);
	TEST_ASSERT_EQUAL(8, array[6]);
}

void test_bubbleSort_100_23_67_12_should_sort(void){

 int array[]= {100,23,67,12};
  bubbleSort  ( array,5);
 TEST_ASSERT_EQUAL( 12, array[0]);
 TEST_ASSERT_EQUAL( 23, array[1]);
 TEST_ASSERT_EQUAL( 67, array[2]);
 TEST_ASSERT_EQUAL( 100, array[3]);

}
 void test_bubbleSort_1_12_3_8_5_should_sort(void){

 int array[]= {1,12,3,8,5};
  bubbleSort  ( array,5);
 TEST_ASSERT_EQUAL( 1, array[0]);
 TEST_ASSERT_EQUAL( 3, array[1]);
 TEST_ASSERT_EQUAL( 5, array[2]);
 TEST_ASSERT_EQUAL( 8, array[3]);
 TEST_ASSERT_EQUAL( 12, array[4]);

}


