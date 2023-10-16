#include <stdio.h>

int main() {

    int nData = 10;
    int *pnData = &nData;
    int **ppnData = &pnData;
    int ***pppnData = &ppnData;

    printf("%p\n", **pppnData);
    printf("%p\n", *ppnData);
    printf("%p\n", pnData);

    printf("%d\n", ***pppnData);
    printf("%d\n", **ppnData);
    printf("%d\n", *pnData);
    return 0;
}
