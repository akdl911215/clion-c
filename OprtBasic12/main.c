#include <stdio.h>

int main() {

//    int a = 0x0A;
//    printf("first %X\n", a);
//    // Decimal: 10
//    // Binary: 0000 1010
//
//    a &= 0x0B;
//    // 0x0B
//    // Decimal: 11
//    // Binary: 0000 1011
//    printf("second %X\n", a);
//    for(int i = 7; i >= 0; --i) {
//        int result = a >> i & 1;
//        printf("%d", result);
//    }
//    // expect Binary: 0000 1010
//    printf("\n----------------\n");


    int nResult = 0x11223344;
    printf("nRsult Decimal : %d\n", nResult);
    int divide = nResult;
    int count = 0;
    while (divide != 0) {
        divide /= 2;
        count++;
    }

    printf("nRsult: ");
    for(int i = count; i >= 0; --i) {
        int result = nResult >> i & 1;
        printf("%d", result);
    }
    printf("\n");

    int nResult2 = 0xFFFF0000;
    int divide2 = nResult2;
    int count2 = 0;
    while (divide2 != 0) {
        divide2 /= 2;
        count2++;
    }

    printf("nRsult2: ");
    for(int i = count2; i >= 0; --i) {
        int result = nResult2 >> i & 1;
        printf("%d", result);
    }
    printf("\n");

    nResult &= nResult2;
//    printf("&nResult %X\n", nResult);
    int divide3 = nResult;
    int count3 = 0;
    while (divide3 != 0) {
        divide3 /= 2;
        count3++;
    }
    printf("nResult: ");
    for(int i = count3; i >= 0; --i) {
        int result = nResult >> i & 1;
        printf("%d", result);
    }
    printf("\n");


    nResult >>= 16;
    printf("%X\n", nResult);
    nResult |= 0x33440000;
    printf("%X\n", nResult);

    return 0;
}
