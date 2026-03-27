#include <stdio.h>
int main() {
	/*int a;
	int sum = 0;
	printf("숫자를 입력하세요: ");
	scanf_s("%d", &a);

	for (int i = 0; i <= a; i++) {
		sum += i;
	}
	printf("%d", sum);
	return 0;*/

	//int a;
	//printf("원하는 단은? ");
	//scanf_s("%d", &a); //몇단을 해야할지 입력

	//printf("%d단\n", a); //몇단인지 입력, 1번만 하는 거니까 for문 밖에서
	//for (int i = 1; i <= 9; i++) { //i가 계속 1씩 증가. i는 9초과가 되면 안 된다
	//	printf("%d * %d = %d\n", a, i, a * i); //원하는 단이 출력. a단에 *9까지 입력됨.
	//}

	for (int i = 2; i <= 9; i++) { //i는 단 2~9
		//i는 j가 다 반복이 끝나면 그때 i 하나 증가
		printf("    %d단\n", i);
		for (int j = 1; j <= 9; j++) { //곱하는 1~9 반복
			printf("%d * %d = %-3d\n", i, j, i * j);
			//3d -> 3자리
			//원래는 오른쪽 정렬인데 -를 붙이면 왼쪽 정렬
			printf("\n");
		} //j for 끝
	} //i for 끝

	return 0;

} //main 끝