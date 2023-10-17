#include <stdio.h>

int main() {

    char *pszData = "Test string!";

    printf("%s\n", ++pszData);  // e > est string!
    printf("%c\n", *pszData++); // T > e
    printf("%c\n", *--pszData); // 0 > e
    printf("%c\n", (*pszData) + 1); // e > f
    return 0;
}
