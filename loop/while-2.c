#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int num, cnt = 0, i;
	printf("원하는 배수 입력: ");
	scanf("%d", &i); //i는 원하는 배수의 숫자 //3

	printf("배수의 개수 입력: ");
	scanf("%d", &num); //보여지는 배수의 개수 num = 5

	while (cnt++ < num) { // 0 < 5 물어봄 참 -> 다음문장 가기 전에 1을 더함
		printf("%d ", i * cnt); // 3 * 1 = 3
		// 1 < 5 -> cnt++ -> 3 * 2 = 6
		// 2 < 5 -> cnt++ -> 3 * 3 = 9
		// 3 < 5 -> cnt++ -> 3 * 4 = 12
		// 4 < 5 -> cnt++ -> 3 * 5 = 15
		// 5 < 5 -> cnt++ -> 탈출
	}

	return 0;
}