#include <stdio.h>

int main() {

    char *pszData = "Test string!";

    printf("%s\n", pszData);
    printf("%p\n", pszData);
    printf("%p\n", &pszData);

    return 0;
}
