
#define MAX_AMP_VALUE_12BIT   10
#define MIN_AMP_VALUE_12BIT   0
#define ADC_MAX_VALUE_12BIT   4094
#define ADC_MIN_VALUE_12BIT   0

#define MAX_AMP_VALUE_10BIT   15
#define MIN_AMP_VALUE_10BIT   -15
#define ADC_MAX_VALUE_10BIT   1023
#define ADC_MIN_VALUE_10BIT   0


int convertA2D12Bit(int* data, int len, float* output);
int checkValidSample(int value,int min,int max);
int a2dconverter(int sample, int minAmps, int maxAmps, int minSampleVal, int maxSampleVal, float* voltage);
