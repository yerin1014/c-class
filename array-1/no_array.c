#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int a, sum = 0;
    float avg = 0;
    for (int i = 1; i <= 10; i++) {
        a = 0;
        printf("점수 입력: ");
        scanf("%d", &a);
        sum = sum + a;
        avg = avg + a;
    }
    avg = avg / 10;
    printf("점수의 합: %d, 점수의 평균: %f", sum, avg);




    return 0;
}