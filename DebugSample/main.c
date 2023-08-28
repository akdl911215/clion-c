#include <stdio.h>

int main() {
    int nData = 10;
    int *pnData = &nData;

    *pnData = 5;

    printf("nData: %d\n", nData);

    return 0;
}
