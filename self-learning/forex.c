#include <stdio.h>
int main() {
	int a[5] = { 9, 1, 7, 3, 5 }; 
	int i, j, min, t;
	for (i = 0; i < 4; i++) { 
		min = i; 
		for (j = i + 1; j < 5; j++) { //예를 들어 i가 0일 때 0번째 자리를 제외한 나머지 숫자들을 비교하는 for문.
			if (a[j] < a[min]) { //작은 값을 찾는 if문.
				min = j; //작은 값부터 차례대로 들어감.
			}
		}
		t= a[i]; //어디에 값을 넣을지 위치를 정함.
		a[i] = a[min]; //위에서 찾은 작은 값을 넣어줌.
		a[min] = t; //정한 위치에 값을 넣음.
	}
	for (i = 0; i < 5; i++) {
		printf("%2d", a[i]); //작은 값부터 차례대로 출력.
	}
}