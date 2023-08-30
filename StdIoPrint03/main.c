#include <stdio.h>

int main()
{
    int nData1 = 1234, nData2 = -4567, nData3 = 123456789;

    printf("%d\n", nData1); // 1234
    printf("%+d, %+d\n", nData1, nData2); // +1234, -4567

    printf("%07d\n", nData1); // 0001234
    printf("%7d\n", nData1);  //    1234
    printf("%-7d\n", nData1); // 1234


    printf("%-7d\n", nData3); // 123456789

    return 0;
}
