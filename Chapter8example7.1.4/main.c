#include <stdio.h>

int main() {

    int nData;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            if (i % 2) nData = i * 5 + 5 - j;
            else nData = i * 5 + j + 1;

            printf("%d\t", nData);
        }
        printf("\n");
    }
    return 0;
}
