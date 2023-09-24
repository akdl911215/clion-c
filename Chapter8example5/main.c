#include <stdio.h>

int main() {

    char cInput;
    int count = 0;

    while (cInput != '/') {
        scanf("%c", &cInput);
        if (cInput == 't') count++;
    }

    printf("count: %d\n", count);
    return 0;
}
