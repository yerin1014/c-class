#include <stdio.h>
void main() {
    int a[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} }; //초기값
    // a[행][열] 0~2 행 0~2 열 -> 9개 요소 구성
    int i, j;
    for (i = 0; i < 3; i++) { //i 행 의미 0~2
        for (j = 0; j < 3; j++) { //j 열 의미 0~2
            printf("%d\t", a[i][j]); //9번 출력
        }
        printf("\n");
    }
    return 0;
}