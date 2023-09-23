#include <stdio.h>

int main() {

    char cInput, cInput2;
    scanf("%c", &cInput);

    if (cInput == 'y' || cInput == 'Y') { goto END; }

    scanf(" %c", &cInput2);

    printf("%c %c\n", cInput, cInput2);


    END:
    return 0;



}
