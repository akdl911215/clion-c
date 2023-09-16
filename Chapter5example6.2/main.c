#include <stdio.h>

int main() {

    int nData;
    int minute = 60;
    printf("정수를 입력 하세요 : ");
    scanf("%d", &nData);

    printf("%02d:%02d:%02d\n", nData / (minute * minute), (nData % (minute * minute)) / minute, nData % minute);

    return 0;
}
