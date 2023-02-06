#include <stdio.h>
#include <string.h>
#include "a2dconverter.h"


void convertA2D(int* data, int len, float* output)
{
    int count = 0, outIdx = 0;
    while(count < len)
    {
        output[outIdx] = (float)((float)MAX_AMP_VALUE * ((float)data[count] / (float)ADC_MAX_VALUE));
        count++;
        outIdx++;
    }
}
