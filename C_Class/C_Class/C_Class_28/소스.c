#include <stdio.h>

void PrintValue(int* pa) {
	printf("*pa = %d\n", *pa);
}

void Changevalue(int* pa, int value) {
	*pa = value;
}

int main() {
	int a;
	int b;

	a = 20;
	b = 30;

	Changevalue(&a, 100);
	Changevalue(&b, 200);

	PrintValue(&a);
	PrintValue(&b);



	return 0;
}