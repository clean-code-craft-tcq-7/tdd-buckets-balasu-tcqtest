#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "rangeCalculator.h"

void test_cases_rangeCalculator(void)
{
    char output[100];
    // Test case to check the ascending sorting
    int data1[] = { 7,9,4,6,2 };
    int output1[] = {2,4,6,7,9};
    sortInAscending(data1, 5);
    assert(memcmp(output1, data1, 5) == 0);

    // Test case to check the ascending sorting with negative number
    int data2[] = { 7,9,-3,6,2 };
    int output2[] = {-3,2,6,7,9};
    sortInAscending(data2, 5);
    assert(memcmp(output2, data2, 5) == 0);

    //Test case to check the is consecutive function
    int data3[] = {1,2,3,6};
    assert(isConsecutive(data3, 0, 4) == 3);

    //Test case to check the is consecutive function after the first range
    int data4[] = {1,2,3,6,8,9};
    assert(isConsecutive(data4, 4, 6) == 6);

    //Test case to check find consecutive ranges in list with single consecutive list
    int data5[] = {1,2,3,6};
    memset(output,0,100);
    findRangesAndCount(data5,4,output);
    assert(strcmp(output,"1-3, 3\n") == 0);

    //Test case to check find consecutive ranges in list with single consecutive list
    int data6[] = {1,2,3,6,9,10,11};
    memset(output,0,100);
    findRangesAndCount(data6,7,output);
    assert(strcmp(output,"1-3, 3\n9-11, 3\n") == 0);
}
