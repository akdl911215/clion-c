#include <stdio.h>

int main() {

    int x = 1, y = 5;

    while (x != 25) {

        if ((x >= 1 && x <= 5) || (x >= 11 && x <= 15) || (x >= 21 && x <= 25)) {
            printf("%d\t", x++);
        } else {
            
        }
    }

    return 0;
}
