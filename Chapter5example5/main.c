#include <stdio.h>

int main() {

    int nData;
    printf("숫자를 입력 하세요 : ");
    scanf("%d", &nData);

    printf("%d\n", ~nData + 1);
    // 0000 0011
    // 1111 1100
    // 1111 1101


    return 0;
}
