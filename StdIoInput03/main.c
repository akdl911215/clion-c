#include <stdio.h>

int main()
{
    char szBuffer[128] = {0};
    printf("Input string: ");

    // Test string 입력하면
    // scanf: Test
    // gets: Test string
    // 문자열은 gets 사용이 좋음

//    scanf("%s", szBuffer);
    gets(szBuffer);
    puts(szBuffer);

    return 0;
}
