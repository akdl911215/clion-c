#include <stdio.h>

int main() {

    float fInput1 = 0, fInput2 = 0;
    printf("Input float data : ");

    scanf("%f %f", &fInput1, &fInput2);
    printf("%.2f\n", (fInput1 + fInput2) / 2 );

    return 0;
}
