#include <stdio.h>

int main() {

    int nData = 1;
    int start = 4, end = 4;

    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 9; ++j)
        {
            if (j >= start && j <= end)
            {
                printf("%d\t", nData++);
            }
            else
            {
                printf("\t");
            }
        }
        start--, end++;

        printf("\n");
    }

    return 0;
}
