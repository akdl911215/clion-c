#include <stdio.h>

int main() {

    int a = 0x0A;
    printf("first %X\n", a);
    // Decimal: 10
    // Binary: 0000 1010

    a &= 0x0B;
    // 0x0B
    // Decimal: 11
    // Binary: 0000 1011
    printf("second %X\n", a);
    for(int i = 7; i >= 0; --i) {
        int result = a >> i & 1;
        printf("%d", result);
    }
    // expect Binary: 0000 1010
    printf("\n----------------\n");


    int nResult = 0x11223344;
    printf("nRsult: ");
    for(int i = 7; i >= 0; --i) {
        int result = a >> i & 1;
        printf("%d", result);
    }
    printf("\n");

    nResult &= 0xFFFF0000;
    printf("%X\n", nResult);
    nResult >>= 16;
    printf("%X\n", nResult);
    nResult |= 0x33440000;
    printf("%X\n", nResult);

    return 0;
}
