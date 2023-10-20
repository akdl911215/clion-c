#include <stdio.h>
#include <string.h>

int main() {

    char *pszData = "1234";
    printf("*pszData sizeof : %d\n", sizeof (pszData));
    char szBuffer[16] = {0};
    printf("Input password : ");

    gets(szBuffer);
    printf("szBuffer sizeof : %d\n", sizeof (szBuffer));

    int compareData = memcmp(pszData, szBuffer, 4) == 0;
    printf("%d\n", compareData);

    if (compareData)
    {
        puts("Success!");
    }
    else
    {
        puts("Failure!");
    }
    return 0;
}
