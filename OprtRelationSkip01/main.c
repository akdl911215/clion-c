#include <stdio.h>

int main() {

    int k, x = -1, y = -1, z = 1;
    k = ++x || ++y && ++z;
    printf("%d %d %d %d\n", k, x, y, z);
    // expect: 0 0 -1 1
    // expect2: 0 0 0 1

    x = -1; y = -1, z = 1;
    k = x++ || ++y && ++z;
    printf("%d %d %d %d\n", k, x, y, z);
    // expect: -1 0 0 2
    // expect2: 

    return 0;
}
