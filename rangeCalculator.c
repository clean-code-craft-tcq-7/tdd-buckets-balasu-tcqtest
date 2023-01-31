#include <stdio.h>
#include <string.h>
#include "rangeCalculator.h"

void sortInAscending(int* data, int length)
{
    int temp,i,j;

    for(i = 0; i < length; i++)
    {
        for(j = i + 1; j < length; j++)
        {
            if(data[i] > data[j])
            {
                temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }
        }
    }
}

void findRangesAndCount(int* data, int len,char* strVal)
{
    int minIdx = 0, maxIdx = 0;
    char rangeInfo[20];

    while(maxIdx < len)
    {
        maxIdx = isConsecutive(data, minIdx, len);
        if(data[minIdx] != data[maxIdx - 1])
        {
            memset(rangeInfo,0,20);
            sprintf(rangeInfo,"%d-%d, %d\n", data[minIdx], data[maxIdx - 1], (maxIdx - minIdx));
            strncpy(strVal,rangeInfo,strlen(rangeInfo));
            strVal += strlen(rangeInfo);
        }
        minIdx = maxIdx;
    }
}

int isConsecutive(int* arr, int min, int len)
{
    int i;
    for(i= min + 1; i<len; i++)
    {
        if((arr[i] - (arr[i-1]+1)) > 0)
        {
            return i;
        }
    }
    return i;
}
