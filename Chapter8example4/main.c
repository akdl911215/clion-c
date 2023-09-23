#include <stdio.h>

int main() {

    int nInputArr[5] = {0};
    int min = 0, max = 0;

    for (int i = 0; i < 5; ++i) scanf("%d", &nInputArr[i]);

    min = nInputArr[0];
    max = nInputArr[0];
    for (int i = 1; i < 5; ++i) {
        if (min > nInputArr[i]) min = nInputArr[i];

        if (max < nInputArr[i]) max = nInputArr[i];
    }

    printf("min:%d, max:%d\n", min, max);

    return 0;
}
