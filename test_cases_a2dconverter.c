#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "a2dconverter.h"

void test_cases_a2dconverter(void)
{
    // Test case to check the input to adc converter and output with single element
    int data[] = {4000, 3000};
    float result[] = {10, 7};
    float output[2];
    convertA2D12Bit(data, 2, output);
    assert(memcmp(output,result,2)==0);

    // Test to check the converter and the converter avoids invalid sensor values
    int data1[] = {4000, 3000, 5000};
    float result1[] = {10, 7};
    float output1[2];
    int outCnt = 0;
    outCnt = convertA2D12Bit(data1, 2, output1);
    assert(memcmp(output1,result1,2)==0);
    assert(outCnt == 2);

    // Test the valid sample value check function
    assert(checkValidSample(-1, ADC_MIN_VALUE_12BIT, ADC_MAX_VALUE_12BIT) == 0);
    assert(checkValidSample(0, ADC_MIN_VALUE_12BIT, ADC_MAX_VALUE_12BIT) == 1);
    assert(checkValidSample(1000, ADC_MIN_VALUE_12BIT, ADC_MAX_VALUE_12BIT) == 1);
    assert(checkValidSample(4094, ADC_MIN_VALUE_12BIT, ADC_MAX_VALUE_12BIT) == 1);
    assert(checkValidSample(4096, ADC_MIN_VALUE_12BIT, ADC_MAX_VALUE_12BIT) == 0);

    // Test the sample conversion with the round of values
    int data2[] = {4000, 3000};
    float result2[] = {10, 7};
    float output2[2];
    int outCnt2 = 0;
    outCnt2 = convertA2D12Bit(data2, 2, output2);
    assert(memcmp(output2,result2,2)==0);
    assert(outCnt2 == 2);

}
