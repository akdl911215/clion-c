#include <stdio.h>

int main() {

    int nData = 10, nNewData = 20;
    int x = 0, y = 0;
    // 128 64 32 16 8 4 2 1

    // 20: 0001 0100
    // 10: 0000 1010

    printf("%d\n", !nData && nNewData); // expect: 1 > print: 0
    // ~nData :   1111 0101
    // nNewData : 0001 0100
    // --------------------
    //            0001 0100

    printf("%d\n", !(nData && x)); // expect: 1 > print: 1
    // nData : 0000 1010
    // x     : 0000 0000
    // -----------------
    //         0000 0000
    // ~     : 1111 1111

    printf("%d\n", !nData || x); // expect: 0 > print: 0
    // ~nData : 1111 0101
    // x      : 0000 0000
    // ------------------
    //          1111 0101

    printf("%d\n", x || !y); // expect: 1 > print: 1
    // x  : 0000 0000
    // ~y : 1111 1111
    // --------------
    //      1111 1111

    printf("%d\n", !(x && !y)); // expect: 1 > print: 1
    // x  : 0000 0000
    // ~y : 1111 1111
    // --------------
    //      0000 0000
    // !  : 1111 1111

    return 0;
}
