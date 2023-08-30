#include <stdio.h>

int main()
{
    float fData = 123.456f;

    printf("%f\n", fData);
    printf("%.1f\n", fData);
    printf("%.2f\n", fData);
    printf("%.3f\n", fData);

    printf("%e\n", fData);
    printf("%g\n", fData);

    return 0;
}
