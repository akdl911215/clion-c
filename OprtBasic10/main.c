#include <stdio.h>

int main() {

    int nData = 123;

    printf("%X\n", nData);
    // 128 64 32 16 8 4 2 1
    //  0   1  1  1 1 0 1 1

    int nData2 = nData >> 3;
    printf("%X\n", nData2);
    // 128 64 32 16 8 4 2 1
    //  1   1 0  1  1 0 0 0
    // 216
    return 0;


}
