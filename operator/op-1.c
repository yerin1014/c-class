#include <stdio.h>
int main() {
	/*int a, b, c;
	a = 5 % 3;
	a--;
	b = (a++) + 3;
	printf("%d %d\n", a, b);
	c = (a++) + 3;
	printf("%d, %d, %d", a, b, c);*/

	/*int num1 = 16, num2 = 44;
	int a = num1++;
	int b = --num2;
	printf("%d", a + b);*/

	int val1 = 10, val2 = 12;
	int result1, result2, result3;
	result1 = (val1 == 10 && val2 == 12);
	result2 = (val1 < 12 || val2 >12);
	result3 = (!val1);

	printf("result1 : %d\n", result1);
	printf("result2 = %d\n", result2);
	printf("result3 = %d\n", result3);

	return 0;
}