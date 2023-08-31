#include <stdio.h>

int main()
{
    float fInput1 = 0, fInput2 = 0;
    printf("input float data : ");

    scanf("%f %f", &fInput1, &fInput2);
    printf("%.2f == %.2f + %.2f\n", fInput1 + fInput2, fInput1, fInput2);

    return 0;
}
