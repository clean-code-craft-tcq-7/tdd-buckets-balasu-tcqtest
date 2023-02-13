
#define MAX_AMP_VALUE_12BIT   10
#define ADC_MAX_VALUE_12BIT   4094
#define ADC_MIN_VALUE_12BIT   0


int convertA2D12Bit(int* data, int len, float* output);
int checkValidSample(int value,int min,int max);
