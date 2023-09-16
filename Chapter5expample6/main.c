#include <stdio.h>

int main() {

    int nData;
    printf("정수를 입력 하세요 : ");
    scanf("%d", &nData);

    printf("%02d:%02d:%02d\n", nData/(60*60), (nData%(60*60))/60, nData%60);

    return 0;
}
