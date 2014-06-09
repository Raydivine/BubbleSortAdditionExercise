#include "unity.h"
#include "DoubleBubbleSort.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_doubleCompare_given_1point32_2point12_should_return_1(void) {
	
	int v1=2.12, v2=1.32;
	TEST_ASSERT_EQUAL(1, doubleCompare(&v1, &v2));
}


void test_doubleCompare_given_1'56_1point56_should_return_0(void) {
	
	int v1=1.56,  v2=1.56;
	TEST_ASSERT_EQUAL(0, doubleCompare(&v1, &v2));
}


void test_integerCompare_given_5point34_6point12_should_return_negative1(void) {
	
	int v1=5.34, v2=6.12;
	TEST_ASSERT_EQUAL(-1, doubleCompare(&v1, &v2));
}

void test_doubleSwap_should_swap(void) {
	int array[]={23.67,7.90};
	
	integerSwap(array, 0, 1);
	TEST_ASSERT_EQUAL(7.90, array[0]);
	TEST_ASSERT_EQUAL(23.67, array[1]);
	
}
