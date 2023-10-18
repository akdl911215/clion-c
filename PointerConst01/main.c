#include <stdio.h>

int main() {

    int nData = 10;
    const int *pnData = &nData;
    int* const pnNewData = &nData;
    pnData = NULL;
    *pnNewData = 10;

    // 아래 코드는 컴파일 오류가 발생한다.
//    *pnData = 10;
//    pnNewData = NULL;
    return 0;
}
