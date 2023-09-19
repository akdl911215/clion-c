#include <stdio.h>
#include <string.h>

int main() {

    char *pszData = "Hello, World";

    // strlen() : char* 타입의 문자열을 받아서 해당 문자열의 길이를 반환하는 함수이다.
    if (pszData != NULL && strlen(pszData) > 3)
    {
        printf("%s\n", pszData);
    }
    return 0;
}
