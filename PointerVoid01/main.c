#include <stdio.h>

int main() {

    int nData = 10;

    void *pszData = "Test string!";
    void *pfnName = main;
    void *pData = &nData;

    // 아래 코드는 컴파일 오류가 발생한다.
//    printf("%c", *(pszData + 1));
}
