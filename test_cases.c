#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "rangeProvider.h"

int main(void)
{
    int data[]={4,5};
    char output[100];

    getRangeData(data, 2, output);
    assert(strcmp(output,"Range, Readings\n4-5, 2\n") == 0);

    return 0;
}
