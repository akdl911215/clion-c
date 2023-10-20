#include <stdio.h>
#include <string.h>

int main() {

    char *pszData = "TEST STRING!";
    int nData = 0;
    char szBuffer[6] = {0};
    double fData = 0;

//    memcpy(&nData, pszData, 3);
//    printf("%s\n", (char*)&nData);

//    memcpy(&nData, pszData, 4);
//    printf("%s\n", (char*)&nData);
//
//    memcpy(szBuffer, pszData, 5);
//    puts(szBuffer);

    memcpy(&fData, pszData, 5);
    printf("%s\n", (char*)&fData);

//    memcpy(&nData, pszData, 5);
//    printf("%s\n", (char*)&nData);

    return 0;
}
