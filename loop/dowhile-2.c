#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i;
	do {

		printf("선택하세요. (1: 새로만들기, 2: 파일열기, 3: 파일닫기)");
		scanf_s("%d", &i);


	} while (i <= 1 || i >= 3);

	if (i == 1) {
		printf("새로만들기");
	}
	else if (i == 2) {
		printf("파일 열기");
	}
	else if (i == 3) {
		printf("파일 닫기");
	}
	return 0;
}