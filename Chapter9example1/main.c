#include <stdio.h>

int main() {

    char name1[10] = {0};
    char name2[10] = {0};

    printf("input name1 : ");
    gets(name1);

    printf("input name2 : ");
    gets(name2);

    for(int i = 0; i < sizeof (name1); ++i) {
        printf("%c", name1[i]);
    }

    return 0;
}
/* 한글 이름 두 개를 입력 받은 후, 같은 성인지 비교하여 같은 성이면 '같음',
   그렇지 않으면 '다름'이라는 문자열을 출력하는 프로그램을 작성하세요.
   단, 만일 사용자가 문자열을 입력하지 않았다면 무조건 '다름'*/