#include <stdio.h>

int main() {

	// datatype ������;
	// �������� ����ҹ���, _, ����
	// ���ڸ� ù���ڷ� ����� �� �����ϴ�.
	// �������� ���̴� 36��
	// ����� ��Ʃ��������� 256�ڱ��� ��밡���մϴ�.

	short a;   // ������ �����Ѵ�.

	a = -20;   // ������� ���� a�� �� 20�� �����Ѵ�.

	// �����������ڿ��� �����մϴ�.
	printf("a = %d\n", a);   // ��ȣ�ִ� ������ %d


	unsigned short aa;

	aa = 30;
	printf("aa = %u\n", aa); // ��ȣ���� ������ %u


	float b = 1.2f;

	1.2; // double

	printf("b = %f\n", b);  // float ����� %f


	double c = 3.3;

	printf("c = %lf\n", c); // double �� ��� %lf

	char d = 66;

	printf("d = %c\n", d); // �ѹ��� ��� %c


	printf("a = %d, aaa = %u, b = %f, c = %lf, d = %c\n", a, aa, b, c, d);



	return 0;
}