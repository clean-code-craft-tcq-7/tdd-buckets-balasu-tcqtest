#include <stdio.h>
#include <string.h>
#include "rangeProvider.h"

void main(void)
{
    int data[]={4,5};
    char output[100];

    getRangeData(data, 2, output);
    assert(strcmp(ouput,"Range, Readings\n4-5, 2\n") == 0);
}
