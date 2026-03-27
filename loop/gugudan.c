#include <stdio.h>
int main() {
	//중복 for : 밖의 for가 1번일 때 안쪽 for는 다 돌아야 함.
	for (int i = 1; i <= 12; i = i + 3) { //i는 단, 3단씩 한줄이니까 +3으로 함
		printf("%7d단\t", i); 
		printf("%4d단\t", i + 1); //처음 단보다 +1 해야 다음 단이 나옴
		printf("%7d단\n", i + 2); //처음 단보다 +2 해야 다음 단이 나옴
		for (int j = 1; j <= 9; j++) { //1~9까지의 곱이 나옴.

			printf("%2d * %2d = %2d ", i, j, i * j);
			printf("%2d * %2d = %2d ", i+1, j, (i+1) * j); //위랑 똑같은 이유.
			printf("%2d * %2d = %2d ", i+2, j, (i+2) * j);
			printf("\n"); //보기 편하라고
		}
		
		
	}

	return 0;

}