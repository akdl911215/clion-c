#include <stdio.h>

int main() {

    int nData = 0;
    for (int i = 10; i <= 100; ++i) {
        if (i % 4 == 0) {
            nData += i;
        }
    }

    printf("%d\n", nData);

    return 0;
}
