
#define MAX_AMP_VALUE   10
#define ADC_MAX_VALUE   4094
#define ADC_MIN_VALUE   0


int convertA2D(int* data, int len, float* output);
int checkValidSample(int value);
