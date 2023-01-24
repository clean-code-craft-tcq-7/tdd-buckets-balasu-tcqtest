#define HEADER_CHAR  "Range, Readings"

void getRangeData(int* data, int dataCnt, char* buff);
int findCountInRange(int* data, int cnt, int min, int max);
int checkWithinRange(int value, int min, int max);
