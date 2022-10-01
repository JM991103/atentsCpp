#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//관계연산자의 연산의 결과값의 데이타 타입? 논리타입
	//논리연산자의 피연산자의 데이타 타입? 논리타입

	int xvalue = 0;

	printf("정수값을 입력하세요: ");
	scanf("%d", &xvalue);

	int ret = (0 < xvalue) && (xvalue < 10);

	printf("xvalue는 0과 10사이에 %d\n", ret);

	// -----------------------
	
	int a = 20;
	int b = 30;

	int max = (a > b) ? a : b;	//삼(3)항 연산자
	printf("a와 b중에 큰 값은 : %d\n", max);

	(a > b) ? printf("a가 b보다 크다") : printf("a가 b보다 작다");


	return 0;
}