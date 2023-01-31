#include <stdio.h>
#include <string.h>
#include "rangeCalculator.h"
#include "rangeProvider.h"

void getRangeData(int* data, int dataCnt, char* buff)
{
    char printData[100];
    int cntInRange;

    memset(printData, 0, 100);
    sortInAscending(data,dataCnt);
    cntInRange = findCountInRange(data, dataCnt, data[0], data[dataCnt - 1]);
    sprintf(printData,"%s\n%d-%d, %d\n",HEADER_CHAR,data[0],data[dataCnt - 1], cntInRange);
    strncpy(buff,printData,strlen(printData));
}
