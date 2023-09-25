#include <stdio.h>

int main() {

    int enter = 1;
    for (int i = 1; i <= 15; ++i) {
        printf("%d\t", i);

        if (i == 1 || i == 3 ||
            i == 6 || i == 10) {
            printf("\n");
            enter++;
        }
    }
    return 0;
}
