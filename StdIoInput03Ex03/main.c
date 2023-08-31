#include <stdio.h>

int main()
{
    char szBuffer[32] = {0};

    printf("Input string: ");
    gets(szBuffer);
    printf("address: %p, output : %s\n", &szBuffer, szBuffer);

    return 0;
}
