#include "unity.h"
#include "IntegerBubblesort.h"

void setUp(void) {}

void tearDown(void) {}

void test_integerCompare_given_1_2_should_return_1(void) {
	
	int v1=2, v2=1;
	TEST_ASSERT_EQUAL(1, integerCompare(&v1, &v2));
}


void test_integerCompare_given_1_1_should_return_0(void) {
	
	int v1=1,  v2=1;
	TEST_ASSERT_EQUAL(0, integerCompare(&v1, &v2));
}


void test_integerCompare_given_5_6_should_return_negative1(void) {
	
	int v1=5, v2=6;
	TEST_ASSERT_EQUAL(-1, integerCompare(&v1, &v2));
}

void test_integerSwap_should_swap(void) {
	int array[]={23,7};
	
	integerSwap(array, 0, 1);
	TEST_ASSERT_EQUAL(7, array[0]);
	TEST_ASSERT_EQUAL(23, array[1]);
	
}