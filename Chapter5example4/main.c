#include <stdio.h>

int main() {

//    int a = 0x11223344;
    // 0001 0001 0010 0010 0011 0011 0100 0100

//    printf("not Decimal : %d\n", ~a);
//    printf("not Hexadecimal: %X\n", ~a);
    // 8 4 2 1
    // 1110 1110 1101 1101 1100 1100 1011 1011

//    int num = 15;
    // 1111
//    num &= (0<<1);
//    printf("\n--------------\n");
//    printf("%d\n", num &= (1 << 1));
    // 1111
    // 0010
    // -----
    // 0010 > 2

//    printf("%d\n", num &= (1 << 2));
//    printf("%d\n", num &= (1 << 3));
//    printf("\n--------------\n");

//    printf("%d\n", num &= ~(1 << 1));
    // 1111
    // 1101
    // ----
    // 1101 > 13

//    printf("%d\n", num &= ~(1 << 2));
    // 1111
    // 1011
    // ----
    // 1011 > 11

//    printf("%d\n", num &= ~(1 << 3));
    // 1111
    // 0111
    // ----
    // 0111 > 7
//    printf("\n--------------\n");

    int nData;
    printf("정수를 입력 하세요 : ");
    scanf("%d", &nData);

    // 128 64 32 16 8 4 2 1
    //  1   1  1 1  0 1 1 1

    printf("nData : %d\n", nData);
    //  0000 1111
    printf("%d\n", nData &= ~(1 << 3));
    return 0;
}
