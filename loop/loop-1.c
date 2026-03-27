#include <stdio.h>
int main() {
	//int a = 1;
	//int sum = 0;

	///*while (a <= 10) {
	//	sum += a;
	//	a = a + 2;
	//}*/

	//for (a = 1; a <= 10; a++) {
	//	if (a % 2 == 1) {
	//		sum += a;
	//	}
	//}
	//printf("a는 %d, 합은 %d", a, sum);
	//return 0;


	int a;
	int sum = 0;
	printf("숫자를 입력하세요: ");
	scanf_s("%d", &a);

	for (int i = 0; i <= a; i++) {
		sum += i;
	}
	printf("%d", sum);
	return 0;

}