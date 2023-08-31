#include <stdio.h>

int main() {

    char sData;

    printf("Input String : ");
    scanf("%c", &sData);

    // 10진수
    printf("%d\n", sData);

    // 8진수
    printf("%#o\n", sData);

    // 16진수
    printf("%#x\n", sData);

    return 0;
}
