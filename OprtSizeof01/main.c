#include <stdio.h>

int main() {

    char szName[16] = {"Choi"};
    int nData = 10;
                                         // byte bit
    printf("%d\n", sizeof(short));       // 2    16
    printf("%d\n", sizeof( (short)100)); // 2    16

    printf("%d\n", sizeof 100);          // 4    32
    printf("%d\n", sizeof (nData));      // 4    32
    printf("%d\n", sizeof (int));        // 4    32

    printf("%d\n", sizeof (100.0));      // 8    64
    printf("%d\n", sizeof (100.0f));     // 4    32
    printf("%d\n", sizeof (10.0 / 10));  // 8    64
    printf("%d\n", sizeof (10 / 10));    // 4    32

    printf("%d\n", sizeof (char*));      // 8    64
    printf("%d\n", sizeof (szName));     // 16   128
    return 0;
}