#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	/*int i = 1;
	int j = 1;
	while (i <= 3) {
		while (j <= 3) {
			printf("%d %d\n", i, j);
			j++;
		}
		i++;
		j = 1;
	}*/
	int i, j;
	for (i = 1; i <= 3; i++) {
		for (j = 1; j <= 3; j++) {
			printf("%d %d\n", i, j);
		}
	}



	return 0;
}