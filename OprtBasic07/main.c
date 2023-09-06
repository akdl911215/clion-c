#include <stdio.h>

int main() {

    int nResult = 0, nData = 10;

    nResult = 3;
    nResult = nData;
    printf("%d, %d\n", &nData, nData);
    printf("%d, %d\n", &nResult, nResult);

    nResult = nData = 8;

    printf("%d, %d\n", nResult, nData);
    return 0;
}
