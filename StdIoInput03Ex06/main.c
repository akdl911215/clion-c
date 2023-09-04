#include <stdio.h>

int main() {

    char sData;
    sData = getchar();
    printf("%#x %d %#o\n", sData, sData, sData);
    printf("%c\n", sData - 32);

    return 0;
}
