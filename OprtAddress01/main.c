#include <stdio.h>

int main() {

    int nData = 10;
    int nResult = 0;

    nResult += nData;
    printf("%d, %p\n", nData, &nData);      // expect: 10, 주소 > 10, 0x16f4d7148
    printf("%d, %p\n", nResult, &nResult);  // expect: 10, 주소 > 10, 0x16ee3f144

    return 0;
}
