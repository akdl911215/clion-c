#include <stdio.h>

int main() {

    char* pszData = "Test string!";
    printf("%d\n", sizeof (pszData));
    printf("%d\n", sizeof (*pszData));

    printf("%d\n", sizeof (pszData + 1));
    printf("%d\n", sizeof (*pszData + 1));
    printf("%d\n", sizeof (*(pszData + 1)));

    return 0;
}
