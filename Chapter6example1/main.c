#include <stdio.h>

int main() {

    int nData, nData2;
    printf("정수 2개를 입력 하세요 : ");
    scanf("%d %d", &nData, &nData2);

    if (nData > 10 && nData2 > 10) printf("1");
    else printf("0");

    return 0;
}
