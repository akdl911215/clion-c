#include <stdio.h>

int main() {

    char szName[16] = {0};
    char *pszName = szName;

    sprintf(pszName, "%s", "홍길동");
    puts(szName);

    return 0;
}
