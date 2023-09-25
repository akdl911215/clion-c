#include <stdio.h>

int main() {

    int nData = 4;
    int num = 1;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            if(j >= nData) {
                printf("%d\t", num++);
                nData--;
            } else {
                printf("\t");
            }
        }
        printf("\n");
    }
    return 0;
}
