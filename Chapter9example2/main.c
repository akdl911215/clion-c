#include <stdio.h>
#include <string.h>

int main()
{
    int *nInput1 = 0;
    int *nInput2 = 0;

    printf("nInput1 : ");
    scanf("%d", &nInput1);

    printf("nInput2 : ");
    scanf("%d", &nInput2);

    if (memcmp(&nInput1,&nInput2, 4) == 0)
    {
//        puts("같음");
        printf("%d 와 %d 은(는) 같다.", nInput1, nInput2);
    }
    else
    {
//        puts("다름");
        printf("%d 와 %d 은(는) 다르다.", nInput1, nInput2);
    }

    return 0;
}
// 두 정수를 입력받아 같은 숫자인지 아닌지 비교하는 프로그램을 작성하세요.
// 단, == 연산자가 아니라 memcmp() 함수를 사용