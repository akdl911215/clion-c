#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char *pszData = NULL;
    char szBuffer[32];
    int nData;

    pszData = (char*) malloc(sizeof (char) * 16);

    memset(pszData, 0, sizeof (char) * 16);
    memset(szBuffer, 'Z', sizeof (szBuffer));
    memset(&nData, 0xFF, sizeof (int));

    free(pszData);

    return 0;
}
// Z = 90
// 90 = 1011010
// 101 1010 = 5 10
// 5 10 = 5a