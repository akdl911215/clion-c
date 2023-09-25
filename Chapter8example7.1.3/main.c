#include <stdio.h>

int main() {

    int num;

    for (int step = 0; step < 5; ++step) {
        for (int i = 0; i < 5; ++i) {
            if (step % 2) num = 5 + 5 * step - i; // 홀수 줄
            else num = 5 * step + i + 1;          // 짝수 줄

            printf("%3d", num);
        }
        printf("\n");
    }
    return 0;
}
