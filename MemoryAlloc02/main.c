#include <stdio.h>
#include <stdlib.h>

int main() {

    char *pszData = NULL;
    int nInput = 0;

    printf("Input length : ");
    scanf("%d", &nInput);
    pszData = (char*) calloc(nInput, sizeof (char));

    fflush(stdin);
    gets(pszData);
    puts(pszData);

    free(pszData);

    return 0;
}

