#include <stdio.h>

int main() {

    int nData = 10;
    int *pnData = &nData;

    printf("%d, %d\n", nData, *pnData);
    printf("%p, %p\n", &nData, pnData);

    *pnData = 20;
    printf("%d\n", nData);

    return 0;
}
