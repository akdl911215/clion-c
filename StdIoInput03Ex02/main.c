#include <stdio.h>

int main()
{
    char szBuffer[5] = {0};
    int length = sizeof(szBuffer) / sizeof(szBuffer[0]);
    printf("szBufferLength: %d\n", length);

    for (int i = 0; i < length; ++i){
        szBuffer[i] = getchar();
    }

    for (int i = 0; i < length; ++i) {
        if (i == 1) printf("%c\n", szBuffer[i]);
    }

    //


//    char s[3];
//
//    // 배열에 입력 받기
//    for (int i = 0; i < 3; ++i) {
//        s[i] = getchar();
//    }
//
//    // 배열 원소 출력
//    for (int i = 0; i < 3; ++i) {
//        printf("%d번째 원소: %c\n", i, s[i]);
//    }
//
//    // 남은 버퍼 데이터 수 출력
//    int idx = 0;
//    while (getchar() != '\n') {
//        idx++;
//    }
//
//    printf("버퍼에 남은 데이터 수: %d", ++idx); // 마지막 '\n'포함


    //

//    char s1, s2, s3;
//    s1 = getchar();
//    while (getchar() != '\n') {}
//
//    s2 = getchar();
//    while (getchar() != '\n') {}
//
//    s3 = getchar();
//    while (getchar() != '\n') {}
//
//    printf("출력: %c %c %c", s1, s2, s3);

   //

//    char s1;
//
//    getchar();
//    getchar();
//    s1 = getchar();
//
//    printf("%c", s1);


    return 0;
}
