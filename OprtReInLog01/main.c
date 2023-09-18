#include <stdio.h>

int main() {

    int nData = 10, nNewData = 20;
    int nResult = 10;
    printf("%d\n", nData == nResult || nData > nNewData); // expect: 1
    printf("%d\n", nData != nResult && nData < nNewData); // expect: 0
    printf("%d\n", nData >= nResult && ++nNewData);       // expect: 1

    return 0;
}
