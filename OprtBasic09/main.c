#include <stdio.h>

int main() {

    int nResult = -0x11223344;
//    printf("%d\n", nResult);
    printf("%X\n", nResult & 0xFFFF0000);
    printf("%X\n", nResult >> 16);
    printf("%X\n", nResult << 8);
    printf("%X\n", nResult | 0x2211FFFF);
    printf("%X\n", nResult ^ 0x2211FFFF);
    printf("%X\n", ~nResult);

    return 0;
}
