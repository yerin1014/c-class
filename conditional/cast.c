#include <stdio.h>
int main() {
	/*int a;
	a = sizeof(int) + sizeof(char); //int는 4byte고 char는 1byte라서
	printf("%d", a);*/

	//int a = 7 + 6;
	//int b = (int)7.3 + (int)6.7; //형 변환은 반올림 안 함.
	//printf("%d %d", a, b);

	float t;
	t = 10 / 3;
	printf("%f", t);
	t = (float)10 / 3;
	printf("%f", t);
	return 0;


}