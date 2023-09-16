#include <stdio.h>

int main() {

    int nData = 10, nNewData = 20;
    int nResult = 10;
    printf("%d\n", nNewData == nData + nResult); // 1
    printf("%d\n", nNewData - 10 != nData); // 0
    printf("%d\n", nData == nResult++); // 1
    printf("%d\n", nData == nResult); // 0
    printf("%d\n", nData == --nResult); // 1

    return 0;
}
