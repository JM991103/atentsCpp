#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>	

int main() {
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

	printf("======================================================================");

	srand(time(NULL));

	int a = 203;

	int ret = a % 8;

	printf("ret = %d\n", ret);

	int value = rand();   // �����߻�

	int direction = value % 4;

	// 0: ����, 1: ����, 2: ����, 3: ����

	printf("����: %d, ����: %d\n", value, direction);


	value = rand();   // �����߻�

	direction = value % 4;

	// 0: ����, 1: ����, 2: ����, 3: ����

	printf("����: %d, ����: %d\n", value, direction);

	printf("======================================================================");

	/*
	// ��ȣ ������
	int a = 20;

	a = -a;   //���׿�����

	printf("a = %d\n", a);
	*/

	// ���迬����
	// <, >, <=, >=, == , != 
	// �ΰ��� ���� �� ����մϴ�.

	int a = 20;
	int b = 30;

	a < b;   // ���׿�����

	// ���迬������ ������ ������� ����Ÿ Ÿ���� ��Ÿ���Դϴ�.
	// �׷��� C���� ��Ÿ���� �����ϴ�.
	// �������� ������ ��Ÿ���� ó���մϴ�.
	// 0�� ����, 0�̿��� ���ڴ� ������ �޾Ƶ帳�ϴ�.

	int ret = a < b;
	printf(" %d < %d = %d\n", a, b, ret);

	ret = a > b;
	printf(" %d > %d = %d\n", a, b, ret);

	ret = a <= b;
	printf(" %d <= %d = %d\n", a, b, ret);


	ret = a >= b;
	printf(" %d >= %d = %d\n", a, b, ret);

	ret = a == b;
	printf(" %d == %d = %d\n", a, b, ret);

	ret = a != b;
	printf(" %d > %d = %d\n", a, b, ret);

	printf("======================================================================");

	int a = 20;
	int b = 30;

	bool ret = a < b;
	printf("ret = %d", ret);


	return 0;
}