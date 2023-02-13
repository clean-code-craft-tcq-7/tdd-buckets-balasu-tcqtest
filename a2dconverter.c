#include <stdio.h>
#include <string.h>
#include <math.h>
#include "a2dconverter.h"


int convertA2D12Bit(int* data, int len, float* output)
{
    int count = 0, outIdx = 0;
    float tempVal;

    while(count < len)
    {
        if(checkValidSample(data[count], ADC_MIN_VALUE_12BIT, ADC_MAX_VALUE_12BIT))
        {
            tempVal =(float)((float)MAX_AMP_VALUE_12BIT * ((float)data[count] / (float)ADC_MAX_VALUE_12BIT));
            output[outIdx] = round(tempVal);
            outIdx++;
        }
        count++;
    }
    return outIdx;
}

int checkValidSample(int value, int min, int max)
{
    if( (value >= min) && (value <= max))
    {
        return 1;
    }

    return 0;
}
