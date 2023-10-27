#include <stdio.h>
#include <stdlib.h>
#include <malloc/malloc.h>

int main() {

    printf("sizeof(char) : %d\n", sizeof(char));
    printf("sizeof(int) : %d\n", sizeof(int));
    printf("sizeof(char) * 10 : %d\n", sizeof(char) * 10);
    printf("sizeof(int) * 10 : %d\n", sizeof (int) * 10);

    char *p = (char *) malloc(12);
    unsigned long size = malloc_size(p);
    printf("size: %lu\n", size);
    free(p);
    //

    char *pszData = NULL;
    int nInput = 0;

    printf("Input length : ");
    scanf("%d", &nInput);
    pszData = (char*)malloc(sizeof (char) * nInput);

    puts("-----------------");
    fflush(stdin);
    gets(pszData);
    puts(pszData);

    free(pszData);
    return 0;
}
