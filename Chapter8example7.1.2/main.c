#include <stdio.h>

int main() {

    int num = 1;

    for (int a = 0; a < 5; a++) {
        for (int b = 0; b < 5; b++) {
            printf("%3d", num++);
        }
        printf("\n");
    }
    return 0;
}
