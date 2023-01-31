#include <stdio.h>
#include <string.h>
#include "rangeCalculator.h"
#include "rangeProvider.h"

void getRangeData(int* data, int dataCnt, char* buff)
{
    char printData[200];

    memset(printData, 0, 200);

    sprintf(printData,"%s\n",HEADER_CHAR);
    if((data != NULL) && (dataCnt > 0))
    {
        sortInAscending(data,dataCnt);
        findRangesAndCount(data, dataCnt, &printData[strlen(HEADER_CHAR) + 1]);
    }
    strncpy(buff,printData,strlen(printData));
}
