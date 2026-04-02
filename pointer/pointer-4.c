#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int b = 0;
int count_even(int a[10]);
void print_cnt(int res);

int main() {
	int ar[10]; //10개의 배열(0 ~ 9)
	int i = 0;
	int res;
	printf("숫자 10개 입력: ");

	for (i = 0; i <= 9; i++) {
		scanf("%d", &ar[i]);
	}
	res = count_even(ar); //함수 호출
	print_cnt(res);
	return 0;
}

//함수 정의
int count_even(int a[10]) {

	int cnt = 0;
	for (int i = 0; i <= 9; i++) {
		if (a[i] % 2 == 0) {
			cnt++; //짝수면 1씩 증가
		}
	}
	return cnt; //반환되는 값(짝수의 개수)
}

//함수 정의

void print_cnt(int res) { //매개변수 정수형 res -> res
	printf("짝수의 개수: %d", res);
}
