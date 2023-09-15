#include <stdio.h>

int main() {

    int num;

    printf("정수를 입력 하세요 : ");
    scanf("%d", &num);

    printf("%d / 5 의 나머지 값 %d", num, num % 5);


    return 0;
}
