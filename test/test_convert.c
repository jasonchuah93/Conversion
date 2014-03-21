#include "unity.h"
#include "convert.h"

void setUp(void){}

void tearDown(void){}

void test_convert(void)
{
	char *testConversionInput = "123456";
	int value = 0;
	value = convert(testConversionInput);
	TEST_ASSERT_EQUAL(123456,value);
	
}
