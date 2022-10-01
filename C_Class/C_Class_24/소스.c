#include <stdio.h>

// Swap 함수에서 전달받은 &a, &b를 가지고 메인에 있는
// a변수의 값과 b변수의 값을 바꾸세요.
// a = 30;
// b = 20;
void Swap(int* pa, int* pb) {
	// *pa 메인에 있는 a변수
	// *pb 메인에 있는 b변수
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}

int main()
{

	int a = 20;
	int b = 30;

	printf("a = %d, b = %d \n", a, b);

	Swap(&a, &b);

	printf("a = %d, b = %d \n", a, b);


	return 0;
}