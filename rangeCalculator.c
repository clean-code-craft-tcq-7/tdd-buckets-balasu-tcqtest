#include <stdio.h>
#include "rangeCalculator.h"

int findCountInRange(int* data, int cnt, int min, int max)
{
    int i,occurCnt = 0;

    for(i=0; i< cnt; i++)
    {
        occurCnt += checkWithinRange(data[i], min, max);
    }
    return occurCnt;
}

int checkWithinRange(int value, int min, int max)
{
    if(value >= min || value <= max)
    {
        return 1;
    }

    return 0;
}

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
