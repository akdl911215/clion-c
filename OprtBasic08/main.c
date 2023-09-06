#include <stdio.h>

int main() {

    char szName[16];
    const int nData = 10;

    // 아래 코드는 모두 오류이다.
    3 = 4;
    szName = 'A';
    nData = 20;

    return 0;
}
