#include <stdio.h>

void add(int a, int b, int* pret) {
	*pret = a + b;
}

int* PSetScore(int value) {
	int score = 0;   // 자동변수, 로컬변수, static을 사용하면 변수가 date영역에 생성 되어서 값이 유지된다.

	score += value;

	return &score;
}


int main() {

	/*
	int a = 20;
	int b = 30;
	int pret = 0;

	add(a, b, &pret);

	int k = 400;

	printf("%d + %d = %d\n", a, b, pret);
	*/

	int* pa = NULL;
	pa = PSetScore(1000);

	printf("*pa = %d\n", *pa);
	printf("*pa = %d\n", *pa);
	printf("*pa = %d\n", *pa);

	return 0;
}