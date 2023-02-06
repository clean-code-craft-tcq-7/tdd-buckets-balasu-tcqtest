#include <stdio.h>
#include <string.h>
#include <math.h>
#include "a2dconverter.h"


int convertA2D(int* data, int len, float* output)
{
    int count = 0, outIdx = 0;
    float tempVal;

    while(count < len)
    {
        if(checkValidSample(data[count]))
        {
            tempVal =(float)((float)MAX_AMP_VALUE * ((float)data[count] / (float)ADC_MAX_VALUE));
            output[outIdx] = round(tempVal);
            outIdx++;
        }
        count++;
    }
    return outIdx;
}

int checkValidSample(int value)
{
    if( (value >= ADC_MIN_VALUE) && (value <= ADC_MAX_VALUE))
    {
        return 1;
    }

    return 0;
}
