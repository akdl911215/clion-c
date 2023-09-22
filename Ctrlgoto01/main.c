#include <stdio.h>

int main() {

    int nInput = 0;
    scanf("%d", &nInput);

    if (nInput > 10)
        goto END;

    printf("Number: %d\n", nInput);


END:
    puts("Eed");

    return 0;
}
