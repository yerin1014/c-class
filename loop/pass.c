#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int pass = 1234;
	int pw = 0; //굳이 0을 안 써도 됨. 아래 주석 사용하면 필요 없음.

	/*printf("암호 입력");
	scanf("%d", &pw);*/

	while (pw != pass) {
		printf("암호 입력");
		scanf("%d", &pw);
	}
	printf("로그인에 성공했습니다.");
	return 0;
}