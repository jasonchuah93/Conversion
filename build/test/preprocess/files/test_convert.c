#include "unity.h"
#include "convert.h"


void setUp(void){}



void tearDown(void){}



void test_convert(void)

{

 char *testConversionInput = "123456";

 int value = 0;

 value = convert(testConversionInput);

 UnityAssertEqualNumber((_U_SINT)((123456)), (_U_SINT)((value)), (((void *)0)), (_U_UINT)13, UNITY_DISPLAY_STYLE_INT);



}
