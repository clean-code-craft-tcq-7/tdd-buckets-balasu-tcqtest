#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "a2dconverter.h"

void test_cases_a2dconverter(void)
{
    // Test case to check the input to adc converter and output with single element
    int data[] = {4000, 3000};
    float result[] = {9.770395, 7.327797};
    float output[2];
    convertA2D(data, 2, output);
    assert(memcmp(output,result,2)==0);

    // Test to check the converter and teh converter avoids invalid sensor values
    int data1[] = {4000, 3000, 5000};
    float result1[] = {9.770395, 7.327797};
    float output1[2];
    int outCnt = 0;
    convertA2D(data1, 2, output1);
    assert(memcmp(output1,result1,2)==0);
    assert(outCnt == 2);
}
