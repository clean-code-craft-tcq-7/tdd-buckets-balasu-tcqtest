#include <stdio.h>
#include <string.h>
#include "rangeProvider.h"

void getRangeData(int* data, int dataCnt, char* buff)
{
    char printData[100];
    int cntInRange;

    memset(printData, 0, 100);
    cntInRange = findCountInRange(data, dataCnt, data[0], data[dataCnt - 1]);
    sprintf(printData,"%s\n%d-%d, %d\n",HEADER_CHAR,data[0],data[dataCnt - 1], cntInRange);
    strncpy(buff,printData,strlen(printData));
}

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
