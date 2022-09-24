#include <stdio.h>

// Swap �Լ����� ���޹��� &a, &b�� ������ ���ο� �ִ�
// a������ ���� b������ ���� �ٲټ���.
// a = 30;
// b = 20;
void Swap(int* pa, int* pb) {
	// *pa ���ο� �ִ� a����
	// *pb ���ο� �ִ� b����
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