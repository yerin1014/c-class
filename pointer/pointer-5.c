#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int add(int a, int b);
void sub(int a, int b);
void arr_prn(int d[5]);

int main() {
	int a = 10, b = 20;
	int d[5] = { 1, 2, 3, 4, 5 }; //배열
	int c;
	c = add(a, b); //함수 호출, 인수 2개 -> 더 하려고
	printf("a + b = %d\n", c);
	sub(a ,b);

	arr_prn(d); //함수 호출
	return 0;
}

int add(int a, int b) { //매개변수 형을 선언
	return a + b;
}

void sub(int a, int b) {
	printf("a - b = %d\n", a - b);
}

void arr_prn(int d[5]) {
	for (int i = 0; i <= 4; i++) {
		printf("%d", d[i]);
	}
}