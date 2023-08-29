#include <stdio.h>

int main()
{
    char szBuffer[128] = {0};

    printf("Input your name: ");
    gets(szBuffer);

    printf("Your name is ");
    puts(szBuffer);

    return 0;
}
