#include <stdio.h>

int main() {

	// 증감연산자
	int a = 20;
	int c = 0;

	a++;   // 후위식
	// a = a + 1;
	printf("a++ = %d\n", a);

	++a;     // 전위식
	// a = a + 1;
	printf("++a = %d\n", a);

	c = a++;
	// c = a;
	// a = a + 1;
	printf("c = %d, a = %d\n", c, a);

	c = ++a;
	// a = a + 1;
	// c = a;
	printf("c = %d, a = %d\n", c, a);




	return 0;
}