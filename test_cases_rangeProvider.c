#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "rangeProvider.h"

void test_cases_rangeProvider(void)
{
    char output[100];
    memset(output, 0, 100);

    // Test case to check the count
    int data[] = {
    4, 5
    };
    getRangeData(data, 2, output);
    assert(strcmp(output, "Range, Readings\n4-5, 2\n") == 0);
    // Test case to check in reverse order
    int data1[] = {
    5, 4
    };
    memset(output, 0, 100);
    getRangeData(data1, 2, output);
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
    int data3[] = {
    3, 3, 5, 4, 10, 11, 12
    };
    memset(output, 0, 100);
    getRangeData(data3, 7, output);
    assert(strcmp(output, "Range, Readings\n3-5, 4\n10-12, 3\n") == 0);

    //Test case with one range and non range values
    int data4[] = {
    3, 3, 5, 4, 10, 20
    };
    memset(output, 0, 100);
    getRangeData(data4, 6, output);
    assert(strcmp(output, "Range, Readings\n3-5, 4\n") == 0);
}
