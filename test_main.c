

extern void test_cases_rangeProvider(void);
extern void test_cases_rangeCalculator(void);
extern void test_cases_a2dconverter(void);

int main(void)
{
    test_cases_rangeProvider();
    test_cases_rangeCalculator();
    test_cases_a2dconverter();
    return 0;
}
