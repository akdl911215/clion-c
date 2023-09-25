#include <stdio.h>

int main() {

    int nData = 1;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j <= i; ++j) {
            printf("%d\t", nData++);
        }
        printf("\n");
    }
    return 0;
}
