#include <stdio.h>

int main() {

    int nInput, nInput2;
    char cInput;

    scanf("%c %d %d", &cInput, &nInput, &nInput2);

    switch (cInput) {
        case 'a':
            printf("%d", nInput + nInput2);
            break;

        case 'b':
            printf("%d", nInput * nInput2);
            break;

        case 'c':
            printf("%d", nInput - nInput2);
            break;

        default:
            printf("%s\n", "알 수 없는 명령");
    }

    return 0;
}
