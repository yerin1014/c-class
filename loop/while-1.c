#define _CRT_SECURE_NO_WARNINGS
//1~5 출력
#include <stdio.h>
int main() {
	//int i = 1;
	//while (i <= 5) { //i가 1부터 5까지, i가 6일 때 끝남.
	//	printf("%d\n", i);
	//	i++; // i = i + 1, i += 1 다 같은 거임.


	//int i = 1; // 1~100 변수
	//int sum = 0; //합계 누적할 변수
	//while (i <= 100) {
	//	if (i % 2 == 0) {
	//		sum += i;
	//	}
	//	i++;
	//}
	//printf("%d\n", sum);


	int num, i = 0;
	printf(" 양의 정수 입력: ");
	scanf("%d", &num);
	while (i < num) {
		printf("handaman!\n");
		i++;
	}

	return 0;
}