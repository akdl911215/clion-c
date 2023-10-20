#include <stdio.h>
#include <string.h>

int main() {

    char *pszData = "TEST STRING!";
    char szBuffer[16] = {0};

    memcpy(szBuffer, pszData, 4);
    puts(szBuffer);
    memcpy(szBuffer, pszData, 6);
    puts(szBuffer);
    memcpy(szBuffer, pszData, 12);
    puts(szBuffer);
    return 0;
}
