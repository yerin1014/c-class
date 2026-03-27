#include <stdio.h>
int main() {
    int num[5] = { 10, 20, 30, 40, 50 };
    int num2[] = { 10, 20, 30 };//묵시적 배열 []칸 안은 3이 생략됨.
    printf("%d\n", num2[2]); //30출력

    int num3[5] = { 1, 2 }; //1, 2, 0, 0, 0 
    int num4[5] = { 4 }; //4, 0, 0, 0, 0
    int num5[5] = { 0 }; //0, 0, 0, 0 , 0

    int num6[5];
    num6[0] = 100;
    num6[1] = 200;
    num6[2] = 300;
    num6[3] = 400;
    num6[4] = 500;

    /*printf("%d", num6[0]);
    printf("%d", num6[1]);
    printf("%d", num6[2]);
    printf("%d", num6[3]);
    printf("%d", num6[4]);*/

    for (int i = 0; i <= 4; i++) {
        printf("%d\n", num6[i]);
    }

    return 0;
}