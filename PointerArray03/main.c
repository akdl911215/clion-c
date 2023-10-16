#include <stdio.h>

int main() {

    char *pszData = "Test string!";

    printf("%c\n", *(pszData + 0));
    printf("%c\n", pszData[0]);
    printf("%c\n", *(pszData + 3));
    printf("%c\n", pszData[3]);

    return 0;
}
