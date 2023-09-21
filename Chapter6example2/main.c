#include <stdio.h>

int main() {

    int nResult, w = 0, x = -1, y = -1, z = 1;
    nResult = w++ || x++ && ++y || ++z;
    printf("%d %d %d %d %d\n", w, x, y, z, nResult); // expect: 1, 0, 0, 2, 1

    return 0;
}
