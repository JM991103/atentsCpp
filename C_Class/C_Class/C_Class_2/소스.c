#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>	

int main() {
	int a;
	a = 1;
	int b;
	b = 2;

	int ret = a / b;
	printf("%d / %d = %d\n", a, b, ret);

	float fret = a / b;
	printf("%d / %d = %f\n", a, b, fret);

	fret = a / (float)b;
	printf("%d / %d = %f\n", a, b, fret);

	printf("======================================================================");

	srand(time(NULL));

	int a = 203;

	int ret = a % 8;

	printf("ret = %d\n", ret);

	int value = rand();   // 난수발생

	int direction = value % 4;

	// 0: 북쪽, 1: 남쪽, 2: 서쪽, 3: 동쪽

	printf("난수: %d, 방향: %d\n", value, direction);


	value = rand();   // 난수발생

	direction = value % 4;

	// 0: 북쪽, 1: 남쪽, 2: 서쪽, 3: 동쪽

	printf("난수: %d, 방향: %d\n", value, direction);

	printf("======================================================================");

	/*
	// 부호 연산자
	int a = 20;

	a = -a;   //단항연산자

	printf("a = %d\n", a);
	*/

	// 관계연산자
	// <, >, <=, >=, == , != 
	// 두값을 비교할 때 사용합니다.

	int a = 20;
	int b = 30;

	a < b;   // 이항연산자

	// 관계연산자의 연산의 결과값의 데이타 타입은 논리타입입니다.
	// 그런데 C언어에는 논리타입이 없습니다.
	// 정수형을 가지고 논리타입을 처리합니다.
	// 0은 거짓, 0이외의 숫자는 참으로 받아드립니다.

	int ret = a < b;
	printf(" %d < %d = %d\n", a, b, ret);

	ret = a > b;
	printf(" %d > %d = %d\n", a, b, ret);

	ret = a <= b;
	printf(" %d <= %d = %d\n", a, b, ret);


	ret = a >= b;
	printf(" %d >= %d = %d\n", a, b, ret);

	ret = a == b;
	printf(" %d == %d = %d\n", a, b, ret);

	ret = a != b;
	printf(" %d > %d = %d\n", a, b, ret);

	printf("======================================================================");

	int a = 20;
	int b = 30;

	bool ret = a < b;
	printf("ret = %d", ret);


	return 0;
}