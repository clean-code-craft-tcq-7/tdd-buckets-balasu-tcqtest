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
}
