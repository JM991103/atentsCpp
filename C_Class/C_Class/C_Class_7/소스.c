#include <stdio.h>

int main() {
	unsigned char a = 1;
	unsigned char b = 2;
	unsigned char ret = 0;

	// a:     00000001
	// b:     00000010
	// a & b: 00000000
	// a | b: 00000011
	// ~a;    11111110
	// a ^ b; 00000011

	ret = a & b;
	printf(" a & b = %d\n", ret);	

	ret = a | b;
	printf(" a & b = %d\n", ret);

	ret = ~a;
	printf("~a = %d\n", ret);

	ret = a ^ b;
	printf("a ^ b = %d\n", ret);


	char light = 0;
	char mask = 0;

	// 00000000

	// ��Ʈ& mask off Ư����Ʈ���� 0���� ����� ���� mask off ��� �մϴ�.
	// 01011010
	// 11110111

	// 01010010

	// ��Ʈ | mask on Ư���ڸ� �� ��Ʈ���� 1�� ������� mask on�̶�� �մϴ�.
	// 01010010
	// 00001000

	// 01011010

	char a = 1;
	char b = 2;

	// 00000001 a
	// 00000010 b
	// 00000011 a ^ b;
	// 00000010 b
	// 00000001 (a ^ b) ^ b;


	printf("a = %d\n", a);
	a = a ^ b;
	printf("a ^ b = %d\n", a);
	a = a ^ b;
	printf("a ^ b = %d\n", a);


	a = 1;
	b = 2;

	printf("a = %d, b = %d\n", a, b);

	// 00000001 a
	// 00000010 b
	a = a ^ b;
	// 00000011 a;

	// 00000011
	// 00000010
	b = a ^ b;
	// 00000001
	// 00000011
	a = a ^ b;
	// 00000010

	printf("a = %d, b = %d\n", a, b);


	return 0;
}