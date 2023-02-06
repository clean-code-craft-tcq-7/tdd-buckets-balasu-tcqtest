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
}
