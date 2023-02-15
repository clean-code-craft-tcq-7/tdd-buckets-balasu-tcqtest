#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include "a2dconverter.h"


int convertA2D12Bit(int* data, int len, float* output)
{
    int count = 0, outIdx = 0;
    float tempVal;

    while(count < len)
    {
        if(a2dconverter(data[count], MIN_AMP_VALUE_12BIT, MAX_AMP_VALUE_12BIT, ADC_MIN_VALUE_12BIT, ADC_MAX_VALUE_12BIT, &tempVal) == 1)
        {
            output[outIdx] = abs(tempVal);
            outIdx++;
        }
        count++;
    }
    return outIdx;
}

int convertA2D10Bit(int* data, int len, float* output)
{
    int count = 0, outIdx = 0;
    float tempVal;

    while(count < len)
    {
        if(a2dconverter(data[count], MIN_AMP_VALUE_10BIT, MAX_AMP_VALUE_10BIT, ADC_MIN_VALUE_10BIT, ADC_MAX_VALUE_10BIT, &tempVal) == 1)
        {
            output[outIdx] = abs(tempVal);
            outIdx++;
        }
        count++;
    }
    return outIdx;
}

int a2dconverter(int sample, int minAmps, int maxAmps, int minSampleVal, int maxSampleVal, float* voltage)
{
    int retSts = 0;
    int range = maxAmps - minAmps;
    float tempVal;

    if(checkValidSample(sample, minSampleVal, maxSampleVal))
    {
        tempVal =(float)(range * ((float)sample / maxSampleVal));
        tempVal += minAmps;
        *voltage = round(tempVal);
        retSts = 1;
    }

    return retSts;
}
int checkValidSample(int value, int min, int max)
{
    if( (value >= min) && (value <= max))
    {
        return 1;
    }

    return 0;
}
