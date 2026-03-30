#define _CRT_SECURE_NO_WARNINGS   
#include <stdio.h>
int main(void)
{
    int i;
    char fruits[3][20];

    for (int j = 0; j <= 2; j++) {
        printf("과일 이름을 입력하세요. ");
        scanf("%s", fruits[j]);
    }

    for (i = 0; i < 3; i++) //0~4
        printf("%d 번째 과일: %s \n", i+1, fruits[i]); //menu[i]는 행을 의미

    return 0;
}