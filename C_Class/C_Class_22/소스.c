#include <stdio.h>

// Á¤¼öÇü µ¡¼À, »¬¼À, °ö¼À, ³ª´°¼À
int add(int a, int b) {
	int temp = 0;
	temp = a + b;

	return temp;
}

int sub(int a, int b) {
	int temp = 0;
	temp = a - b;

	return temp;
}

int mul(int a, int b) {
	int temp = 0;
	temp = a * b;

	return temp;
}

float div(int a, int b) {
	return a / (float)b;
}


int main() {
	int a = 10;
	int b = 20;

	int ret = add(a, b);

	printf("%d + %d = %d\n", a, b, ret);

	ret = sub(a, b);

	printf("%d - %d = %d\n", a, b, ret);

	ret = mul(a, b);
	printf("%d * %d = %d\n", a, b, ret);

	float retf = div(a, b);
	printf("%d * %d = %f\n", a, b, retf);

	return 0;
}