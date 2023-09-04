#include <stdio.h>

int main() {

    int nData;

    printf("Input Integer: ");
    scanf("%d", &nData);

    printf("%d\n", nData);
    printf("%#x\n", nData);
    printf("%u\n", nData);

    // 0
    // -0 0
    // -1 4294967295
    // -2 4294967294
    // -3 4294967293
    // -4 4294967292
    // -10 4294967286
    return 0;
}
