#include <stdio.h>
int main(void) {
	int a, b, c;
	a = 5 % 3; //a = 2
	a--; //a = 1
	b = (a++) + 3; //+전에 출력이라 1+3 = 4 = b
	printf("%d %d\n", a, b); //2, 4
	c = (++a) + 3; //+먼저 하고 출력이라 3+3 = 6 = c
	printf("%d %d %d", a, b, c); //3, 4, 6
	return 0;
}