#include <stdio.h>

int main() {

//    int a = 0x12;
//    printf("%X\n", a);
    // 0001 0010

//    int b = a >> 7;
//    printf("1: %d\n", b);
    // 0010 0000

//    printf("2: %d\n",  a >> 6);
//    printf("3: %d\n",  a >> 5);
//    printf("4: %d\n",  a >> 4);
//    printf("3: %d\n",  a >> 5);

//    for (int i = 7; i >= 0; --i) {
//        int result = a >> i & 1;
//        printf("%d", result);
//    }
//    printf("\n------\n");

    int nResult = 0x11223344;
    // 8 4 2 1
    // 0001 0001 0010 0010 0011 0011 0100 0100

    nResult &= 0xFFFF0000;
    // 1111 1111 1111 1111 0000 0000 0000 0000

    // 위 2 binary &
    // 0001 0001 0010 0010 0011 0011 0100 0100
    // 1111 1111 1111 1111 0000 0000 0000 0000
    // ---------------------------------------
    // 0001 0001 0010 0010 0000 0000 0000 0000
    // Decimal: 287440896
    // Hexadecimal: 0x11220000
    printf("& %X\n", nResult);

    nResult >>= 16;
    // 0000 0000 0000 0000 0001 0001 0010 0010
    // Decimal: 4386
    // Hexadecimal: 0x1122
    printf(">>=16 %X\n", nResult);

    nResult |= 0x33440000;
    // 8 4 2 1
    // 0000 0000 0000 0000 0001 0001 0010 0010
    // 0011 0011 0100 0100 0000 0000 0000 0000
    // ---------------------------------------
    // 0011 0011 0100 0100 0001 0001 0010 0010
    // Decimal: 860,098,850
    // Hexadecimal: 0x33441122
    printf("%X\n", nResult);

    return 0;
}
