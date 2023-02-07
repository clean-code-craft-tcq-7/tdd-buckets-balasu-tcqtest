

extern void test_cases_rangeProvider(void);
extern void test_cases_rangeCalculator(void);
extern void test_cases_a2dconverter(void);
extern void test_case_rangeProviderWithADC(void);

int main(void)
{
    //test_cases_rangeProvider();
    test_cases_rangeCalculator();
    test_cases_a2dconverter();
    test_case_rangeProviderWithADC();

    return 0;
}
