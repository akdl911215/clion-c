#include <stdio.h>

int main() {

    int nData = -123;
    // 16진수 -7B

    printf("%X\n", nData);
    // 128 64 32 16 8 4 2 1
    //  0   1  1  1 1 0 1 1

    int nData2 = nData >> 3;
    printf("%X\n", nData2);
    // 128 64 32 16 8 4 2 1
    //   0  0  0  0 1 1 1 1
    // 15 == 0f
    return 0;


}
