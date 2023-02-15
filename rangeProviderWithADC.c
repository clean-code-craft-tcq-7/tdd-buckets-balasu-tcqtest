#include <stdio.h>
#include <string.h>
#include "rangeCalculator.h"
#include "rangeProviderWithADC.h"
#include "rangeProvider.h"


void getRangeDataWithADC(int* data, int dataCnt, char* buff,int(*fp_a2dconverter)(int*, int, float*))
{
    char printData[200];
    float convrtData[dataCnt];
    int interimData[dataCnt];
    int count;

    memset(printData, 0, 200);

    sprintf(printData,"%s\n",HEADER_CHAR);
    if((data != NULL) && (dataCnt > 0))
    {
        count = fp_a2dconverter(data,dataCnt, convrtData);
        convertFltToInt(convrtData, interimData, count);
        sortInAscending(interimData,count);
        findRangesAndCount(interimData, count, &printData[strlen(HEADER_CHAR) + 1]);
    }
    strncpy(buff,printData,strlen(printData));
}

void convertFltToInt(float* fltArr, int* intArr, int count)
{
    int tmpCnt = 0;
    while(tmpCnt < count)
    {
        intArr[tmpCnt] = (int)fltArr[tmpCnt];
        tmpCnt++;
    }
}
