//증가감소연산자
//++a ex) printf("%d", ++a); -> 5였던 a가 1 증가된 후 6을 출력
//a++ ex) printf("%d", a++); -> 5를 출력한 후 1 증가되어 6이 출력됨
//--a ex) printf("%d", --a); -> 5였던 a가 1 감소된 후 4를 출력
//a-- ex) printf("%d", a++); -> 5를 출력한 후 1 감소되어 4가 됨


#include <stdio.h>
int main() {
	int a = 10;
	printf("%d", a++); //후위 증가 //10
	printf("%d", ++a); //전위 증가 //12
	printf("%d", a--); //후위 감소 //12
	printf("%d", --a); //전위 감소 //10

	return 0;
}