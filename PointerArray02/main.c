#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    int *pnData = NULL;
    pnData = (int*) malloc(sizeof(int) * 4);
    memset(pnData, 0, sizeof(int) * 4);

    *(pnData) = 10;
    printf("%p\n", pnData);
    printf("%d\n", *(pnData));
    printf("---------------\n");

    *(pnData + 1) = 20;
    printf("%d\n", *(pnData));

    printf("%p\n", pnData + 1);
    printf("%d\n", *(pnData + 1));

    free(pnData);
    return 0;
}
