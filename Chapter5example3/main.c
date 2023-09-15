#include <stdio.h>

int main() {

    int num;
    printf("정수를 입력 하세요: ");
    scanf("%d", &num);

    // 64 32 16 8 4 2 1
    //  0  0 0  1 1 1 1

    // 120
    printf("%d", num & 120);

    return 0;
}
