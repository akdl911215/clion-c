#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc/malloc.h>

int main() {

    char *pszData = NULL;

    int nInput = 0;
    printf("nInput : ");
    scanf("%d", &nInput);

    if (nInput < 10) {
        nInput = 10;
    } else if (nInput > 100) {
        nInput = 100;
    }

    printf("%u\n", nInput);

    pszData = (char *)malloc(sizeof (char) * nInput);
    printf("pszData: %p\n", &pszData);
    printf("sizeof(%d)\n", sizeof (*pszData));

    printf("%d\n", malloc_size(pszData) / sizeof (*pszData));

    *pszData = 10;

    free(pszData);
    return 0;
}
// 10,000,000,000,000


// unsigned integer
// 4,294,967,295

// 1,316,134,912
// 일십 삼억 일천 육백 일십 삼만 사천 구백 일십 이

// 4e       72       a0       00
// 01001110 01110010 10100000 00000000