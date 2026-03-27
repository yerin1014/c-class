#include <stdio.h>
int main() {
	//int i, cnt = 0;
	//for (i = 1; i <= 100; i++) { //1부터 100까지
	//	if (i % 3 == 0 && i % 7 == 0) { //3의 배수이면서 7의 배수인 정수
	//		printf("%d*", i); //조건이 맞으면 출력
	//	}
	//}

	int i;
	for (i = 0; i < 10; i++) {
		if (i % 3 == 0) continue; //만약 i가 3의 배수면 아래로 내려가지 않고 다시 위로 올라감.
		if (i > 5) break; // 만약 i가 5보다 크게 되면 for문을 탈출.
		printf("%d", i); // 5보다 크면 탈출이니까 5까지 출력 됨.
	}
}