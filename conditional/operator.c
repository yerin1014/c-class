#include <stdio.h>
int main(void) {
    int num1, num2, res1; // res1은 +, -, *를 다 포함.
    double res2; // res2는 /를 포함.
    char op; // 연산자를 받는 변수.
    char a; // 끝낼지 안 끝낼지 물어볼 때 쓰는 변수.
    while (1) {
        printf("첫번째 숫자를 입력하세요:  ");
        scanf_s("%d", &num1);
        printf("연산자를 입력하세요(+ - * /):  "); //사칙연산
        scanf_s(" %c", &op);
        printf("두번째 숫자를 입력하세요:  ");
        scanf_s("%d", &num2);

        switch (op) { //조건문

        case '+':
            res1 = num1 + num2;
            // printf("덧셈 결과: %d\n", num1 + num2);
            break; //swich문을 벗어나려고

        case '-':
            res1 = num1 - num2;
            // printf("뺄셈 결과: %d\n", sub);
            break;

        case '*':
            res1 = num1 * num2;
            // printf("곱셈 결과: %d\n", mul);
            break;

        case '/':
            res2 = (double)num1 / num2;
            // printf("나눗셈 결과: %.2f\n", res2);
            break;
            /*default:
                printf("잘못된 연산자입니다\n");
                */
        }

        if (op == '+' || op == '-' || op == '*') { // ||는 or임.
            printf("결과: %d\n", res1);
        }
        else if (op == '/') { //따로 쓰는 이유는 혼자서 double인 실수를 쓰기 때문
            printf("결과: %.2f\n", res2); //.2는 소수점 자리
        }
        else {
            printf("잘못된 연산자입니다.\n"); //사칙연산자를 잘못 입력했을 경우.
        }

        printf("연산을 종료하겠습니까?(Y/y)\n");
        scanf_s(" %c", &a); // 띄어쓰기를 안 하면 앞에서 enter 한 걸 문자로 생각해서 안 써짐.
        if (a == 'Y' || a == 'y') { //대소문자 구분때문에 or를 사용
            break; // while문을 멈추려고
        }
        else {
            printf("다시 실행\n");
        }
    }


	return 0; //모든 걸 끝냄.
}