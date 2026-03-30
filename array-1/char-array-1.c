// 문자열의 길이를 구하는 프로그램

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    char str[30] = "C language"; //문자배열 30자
    int i = 0; //0부터 시작

    while (str[i] != '\0') //조건이 만족할 때 반복
                           //!= 다르다 \0는 Null 값을 의미
                           //문자열 내용 끝나는 시점에 반드시 Null이 들어감.
        i++;

    printf("문자열\"%s\"의 길이는 %d입니다.\n", str, i);
    return 0;
}