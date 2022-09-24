#include <stdio.h>

// �Լ��� ���޵� ���ڰ��� �޴� ������ �Ű�����(Parameter)
int add(int a, int b) {   // call by value
	return a + b;
}

void padd(int* pa, int* pb, int* pret) { // call by address
	*pret = *pa + *pb;
}


// �Լ��� ȣ���Ҷ� ���ڰ��� ���� ���
// Call by Value (���� ���� ȣ��)
// Call by Address   (�ּ��� ���� ȣ��)

int main() {
	int a = 10;
	int b = 20;

	int ret = add(a, b);   // �Լ��� ȣ���Ҷ� �����ϴ� ���� ����(argument)

	printf("%d + %d = %d\n", a, b, ret);

	a = 40;
	b = 50;
	padd(&a, &b, &ret);
	printf("%d + %d = %d\n", a, b, ret);


	return 0;
}