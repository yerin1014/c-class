#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int price, money, change, c5000 = 0, c1000 = 0, c100 = 0, c10 = 0, c1 = 0;
    printf("물건값과 투입금액 입력");
    scanf("%d %d", &price, &money);

    change = money - price;
    money = money - price;
    while (money != 0) {
        if (money >= 5000) {
            c5000++;
            money = money - 5000;
        }
        else if (money >= 1000) {
            c1000++;
            money = money - 1000;
        }
        else if (money >= 100) {
            c100++;
            money = money - 100;
        }
        else if (money >= 10) {
            c10++;
            money = money - 10;
        }
        else if (money >= 1) {
            c1++;
            money = money - 1;
        }
    }

    printf("남는 금액: %d (5000원: %d, 1000원: %d, 100원: %d, 10원: %d, 1원 :%d)", c1 + c10 * 10, c5000, c1000, c100, c10, c1);


    return 0;
}