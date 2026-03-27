#include <stdio.h>
int main() {

	//int a = 8, b = 10, c;

	//if (a++ >= b--) { // a = 8, b = 10
	//	c = a - b; //참(만족)
	//}
	//else { //거짓
	//	c = a + b; // a = 9, b = 9, c = 18
	//}
	//printf("a = %d\n", a);
	//printf("b = %d\n", b);
	//printf("c = %d\n", c);

	int num1 = 16, num2 = 80;
	printf("%d", num1 > num2 ? num1 & num2 : num1 ^ num2);


	return 0;
}