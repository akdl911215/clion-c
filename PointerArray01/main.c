#include <stdio.h>

int main() {

    char szName[16] = {0};
    for(int i = 0; i < sizeof (szName) / sizeof (char); ++i) {
        printf("%d\n", szName[i]);
    }
    printf("\n---------------\n");

    char *pszName = szName;
    for(int i = 0; i < sizeof (pszName) / sizeof (char); ++i) {
        printf("%d\n", pszName[i]);
    }
    printf("\n---------------\n");

    sprintf(pszName, "%s", "홍길동");
    puts(szName);

    for(int i = 0; i < sizeof (szName) / sizeof (char); ++i) {
        printf("%d\n", szName[i]);
    }

    return 0;
}
