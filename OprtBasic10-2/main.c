#include <stdio.h>

int main() {

//    int a = 1;
//    printf("a: %X\n", a);
//    int b = -1;
//    printf("b: %X\n", b);
//    printf("binary b print : ");
//    for (int i = 7; i >= 0; --i) {
//        int result = b >> i & 1;
//        printf("%d", result);
//    }
//    printf("\n");
//
//    int c = 2;
//    printf("c: %X\n", c);
//    printf("binary c print : ");
//    for (int i = 7; i >= 0; --i) {
//        int result = c >> i & 1;
//        printf("%d", result);
//    }
//    printf("\n");
//
//    int d = -2;
//    // FFFFFFFE
//    printf("d: %X\n", d);
//    printf("binary d print : ");
//    for (int i = 7; i >= 0; --i) {
//        int result = d >> i & 1;
//        printf("%d", result);
//    }
//    // expect d:
//
//    printf("\n");
//
//    int e = c >> 1;
//    printf("e: %X\n", e);
//
//    int f = d >> 1;
//    printf("f: %X\n", f);
//    printf("binary f print : ");
//    for (int i = 7; i >= 0; --i) {
//        int result = f >> i & 1;
//        printf("%d", result);
//    }
//    printf("\n");
//
//    int g = -3;
//    printf("g: %X\n", f);
//    printf("binary g print : ");
//    for (int i = 7; i >= 0; --i) {
//        int result = g >> i & 1;
//        printf("%d", result);
//    }
//    printf("\n");

    int nData = -123;
    // 16진수 -7B

    printf("%X\n", nData);
    printf("binary nData print : ");
    for (int i = 7; i >= 0; --i) {
        int result = nData >> i & 1;
        printf("%d", result);
    }
    printf("\n");
    // 128 64 32 16 8 4 2 1
    //  1   0  0  0 0 1 0 1


    int nData2 = nData >> 3;
    printf("%X\n", nData2);
    printf("binary print : ");
    for (int i = 7; i >= 0; --i) {
        int result = nData2 >> i & 1;
        printf("%d", result);
    }
    // 128 64 32 16 8 4 2 1
    //  1   1  1  1 0 0 0 0
    // 음수 이기 때문에 패딩이 1로 된다
    // 255로 출력

    // 15 == 0f
    return 0;


}
