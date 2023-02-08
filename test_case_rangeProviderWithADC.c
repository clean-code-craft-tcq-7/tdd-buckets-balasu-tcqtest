#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "rangeProvider.h"

void test_case_rangeProviderWithADC(void)
{
    char output[100];

    //Test with ADC sample data as input
    int data5[] = {1637, 2047};
    memset(output, 0, 100);
    getRangeData(data5, 2, output);
    assert(strcmp(output, "Range, Readings\n4-5, 2\n") == 0);

    //Test case with empty array as input
    int data2[2];
    memset(output, 0, 100);
    getRangeData(data2, 0, output);
    assert(strcmp(output, "Range, Readings\n") == 0);

    //Test case with empty array as input but valid length value
    memset(output, 0, 100);
    getRangeData(NULL, 2, output);
    assert(strcmp(output, "Range, Readings\n") == 0);

    //Test case with empty array as input and invalid length value
    memset(output, 0, 100);
    getRangeData(NULL, 0, output);
    assert(strcmp(output, "Range, Readings\n") == 0);

    //Test case with multiple ranges
    int data3[] = { 1200, 1228, 2047, 1637};
    memset(output, 0, 100);
    getRangeData(data3, 4, output);
    assert(strcmp(output, "Range, Readings\n3-5, 4\n") == 0);
}
