#include <stdio.h>

int main(){
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


	return 0;
}