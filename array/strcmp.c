#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <string.h> 

int main(void)
{
    int res;
    char a[30];
    char b[30];

    printf("첫번째 문자열을 입력하세요: ");
    scanf("%s", a); //배열명은 배열의 첫 주소이다. 만약에 하나하나 즉 하나의 요소를 입력 받을 땐 &를 붙인다.

    printf("두번째 문자열을 입력하세요: ");
    scanf("%s", b);

    res = strcmp(a, b); //문자열 비교
    //res는 0, 음수, 양수
    if (res == 0)
    {
        printf("%s가 %s와 같습니다.\n", a, b);
    }
    else if (res < 0)
    {
        printf("%s가 %s보다 앞이다.\n", a, b);
    }
    else
    {
        printf("%s가 %s보다 뒤에 있다.", a, b);
    }

    return 0;
}