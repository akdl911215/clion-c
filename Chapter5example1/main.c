#include <stdio.h>

int main() {

    int num1 = 0, num2 = 0;

    printf("2개의 정수를 입력 하세요 : ");
    scanf("%d %d", &num1, &num2);

    printf("%d\n", num1 + num2);
    printf("%d\n", num1 - num2);
    printf("%d\n", num1 * num2);
    printf("%d", num1 / num2);
    return 0;
}
