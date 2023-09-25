#include <stdio.h>

int main() {

    int result = 1, flag = 1;

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            printf("%d\t", result);
            result += flag;
        }
        printf("\n");

        if (i % 2) { // odd
            result += 6;
            flag = 1;
        } else {     // even
            result += 4;
            flag = -1;
        }
    }

    return 0;
}
