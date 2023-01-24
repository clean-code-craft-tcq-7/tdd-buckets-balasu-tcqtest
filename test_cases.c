#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "rangeProvider.h"

int main(void)
{
    char output[100];
    memset(output, 0, 100);

    // Test case to check the count
    int data[]={4,5};
    getRangeData(data, 2, output);
    assert(strcmp(output,"Range, Readings\n4-5, 2\n") == 0);

    int data1[] = {5,4};
    memset(output, 0, 100);
    getRangeData(data1, 2, output);
    assert(strcmp(output,"Range, Readings\n4-5, 2\n") == 0);
    return 0;
}
