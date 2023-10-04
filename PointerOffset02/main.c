#include <stdio.h>

int main() {

    char* pszData = "Test string!";
    printf("[%p] %c\n", pszData, *pszData);
    printf("[%p] %c\n", pszData + 1, *(pszData + 1));
    printf("[%p] %c\n", pszData + 2, *(pszData + 2));
    printf("[%p] %c\n", pszData + 11, *(pszData + 11));
    printf("[%p] %c\n", pszData + 12, *(pszData + 12));

    return 0;
}
