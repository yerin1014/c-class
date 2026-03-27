#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

	int a, i = 1;
	printf("출력하고 싶은 단은 ? ");
	scanf("%d", &a);

	while (i <= 9) {
		printf("%d * %d = %d ", a, i, a * i);
		i++;
	}

	return 0;
}