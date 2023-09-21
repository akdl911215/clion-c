#include <stdio.h>

int main() {

    int nData, nData2, nData3;
    printf("정수 3개를 입력 하세요 : ");
    scanf("%d %d %d", &nData, &nData2, &nData3);

    int result = nData > nData2 ? nData > nData3 ? nData : nData3 : nData2 > nData3 ? nData2 : nData3;
    printf("%d\n", result);

    return 0;
}
