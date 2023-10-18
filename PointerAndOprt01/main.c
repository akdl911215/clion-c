#include <stdio.h>

int main() {

    char *pszData = "Test string!";
    printf("%c\n", *pszData);
    printf("%c\n", (*pszData) + 1);
    printf("%d\n", (*pszData) + 1);
    printf("%c\n", (*pszData) + 2);
    printf("%c\n", (*pszData) + 3);
    printf("%c\n", (*pszData) + 4);
    printf("%c\n", (*pszData) + 5);
    printf("\n---------------\n");
    printf("%s\n", ++pszData);  // e > est string!
    printf("%c\n", *pszData++); // T > e
    printf("%c\n", *--pszData); // 0 > e
    printf("%c\n", (*pszData) + 1); // e > f

    printf("\n---------------\n");
    printf("%c\n", *pszData);
    printf("%c\n", *pszData++);
    printf("%c\n", *++pszData);
    return 0;
}
