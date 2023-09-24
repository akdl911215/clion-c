#include <stdio.h>

int main() {

    char ch;

    while (1)
    {
        if ((ch = getchar()) == '/')
            break;

        putchar(ch);
    }
    return 0;
}
