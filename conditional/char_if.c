// 1글자를 받아 대문자, 소문자, 숫자로 분류
#include <stdio.h>

int main() {
	char ch;
	printf("문자 입력");
	//scanf_s("%c", &ch);
	ch = getchar(); //1글자 입력


	if (ch >= 'A' && ch <= 'Z') { //65~90 (아래에 예시)
		printf("대문자");
	}
	else if (ch >= 'a' && ch <= 'z') { //97~122
		printf("소문자");
	}
	else if (ch >= '0' && ch <= '9') { //48~57
		printf("숫자");
	}
	else {
		printf("기타");
	}

	//아스키코드로 쓴 if문
	/*if (ch >= 65 && ch <= 90) {
		printf("대문자");
	}
	else if (ch >= 97 && ch <= 122) {
		printf("소문자");
	}
	else if (ch >=48 && ch <= 57) {
		printf("숫자");
	}
	else {
		printf("기타"); */

	return 0;
}