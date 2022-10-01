#include <stdio.h>
#include <stdbool.h>   // 해당 헤더파일을 include하면 bool 타입을 쓸 수있다.

int main() {
	int a = 20;
	int b = 30;

	bool ret2 = a < b;   // bool 타입 사용.

	printf("ret = %d\n", ret2);

	// 논리연산자
	// &&(논리And), ||(논리Or) , !(논리 not)
	//

	// 논리And 그리고
	// true && true = true;
	// true && false = false;
	// false && true = false;
	// false && false = false;

	// 논리 OR 또는 혹은
	// true || true = true;
	// true || false = true;
	// false || true = true;
	// false || false = false;

	// 논리 Not
	// !false = true;
	// !true = false;

	int TRUE = 1;
	int FALSE = 0;

	int ret = TRUE && FALSE;
	printf("TRUE && FALSE = %d\n", ret);

	ret = FALSE && FALSE;
	printf("FALSE && FALSE = %d\n", ret);

	ret = TRUE || FALSE;
	printf("TRUE || FALSE = %d\n", ret);

	ret = FALSE || FALSE;
	printf("FALSE || FALSE = %d\n", ret);







	return 0;
}