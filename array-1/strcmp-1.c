#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
	char a[30];
	char b[30];
	int res;

	printf("첫번째 단어를 입력하시오: ");
	scanf("%s", a); //배열명은 배열의 첫 주소이다.
					//배열의 요소는 &를 붙인다. (a[3]에 scanf를 받고 싶을 때)
	printf("두번째 단어를 입력하시오: ");
	scanf("%s", b);
	
	res = strcmp(a, b); //문자열 비교                    
	// res 는 0, 음수, 양수

	if (res < 0) { //음수이면 문자열 1이 문자열 2보다 사전순으로 앞에 있음.
		printf("%s가 %s보다 앞이다\n", a, b);
	}
	else if (res == 0) { //반환값이 0이면 완전히 같다.
		printf("%s랑 %s가 같다\n", a, b);
	}
	else {
		printf("%s가 %s보다 뒤에 있다\n", a, b); 
		//양수이면 문자열 1이 문자열 2보다 사전순으로 뒤에 있음
	}


	return 0;
}