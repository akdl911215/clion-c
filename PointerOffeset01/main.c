#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int *pnData = NULL;
    pnData = (int*) malloc(sizeof (int) * 4);
    memset(pnData, 0, sizeof (int) * 4);
    printf("%p\n", pnData);
    printf("%p\n", pnData + 1);
    printf("%p\n", pnData + 2);
    printf("%p\n", pnData + 3);
    free(pnData);

    return 0;
}
