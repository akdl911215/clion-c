#include <stdio.h>

int main() {

    int nData = 0x41;

    printf("%d\n", nData); // 65
    printf("%X\n", nData); // 41
    printf("%x\n", nData); // 41

    printf("%c\n", nData); // A
    printf("%c\n", nData + 1); // B
    printf("%c\n", 'A' + 2); // C
    printf("%c\n", 'A' + 3); // D

    printf("%s, %d\n", "Hello", 10); // Hello 10

    return 0;
}
