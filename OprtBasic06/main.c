#include <stdio.h>

int main() {

    char ch = 'A';
    int nData = 15;
    float fData1 = 1.5f, fData2 = 3.4f;

    printf("%d\n", ch + 2);
    printf("%c\n", ch + 2);
    printf("%f\n", fData1 * 100 / fData2);
    printf("%f\n", fData2 / fData1);

    printf("%f\n", nData * 100 / 100);
    printf("%f\n", nData / 10 * 100.0f);
    printf("%d\n", (int)((float)nData / 10 * 100.0f));
    printf("%f\n", (float)nData * 100 / 100);
    printf("%f\n", (float)(nData * 100) / 100);

    return 0;
}
