#include <stdio.h>

int main() {

    int nInput[5] = {0};

    for (int i = 0; i < 5; ++i) scanf("%d", &nInput[i]);


    int nResult = nInput[0];
    for (int i = 1; i < 5; ++i) if (nResult < nInput[i]) nResult = nInput[i];


    printf("%d\n", nResult);


    return 0;
}
