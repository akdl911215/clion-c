#include <stdio.h>

int main() {

    int nData = 10;
    int *pnData = &nData;
    // 변수의 이름이 pnData인 포인터이며, 이 변수를 000000016fc13148 번지로 초기화한다.
    // 따라서 000000016fc13148 번지로 시작하는 4바이트의 메모리에 저장된 값을
    // int 형으로 해석한다.

    printf("%d, %d\n", nData, *pnData);
    printf("%p, %p\n", &nData, pnData);

    *pnData = 20;
    printf("%d\n", nData);

    return 0;
}
