#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//���迬������ ������ ������� ����Ÿ Ÿ��? ��Ÿ��
	//���������� �ǿ������� ����Ÿ Ÿ��? ��Ÿ��

	int xvalue = 0;

	printf("�������� �Է��ϼ���: ");
	scanf("%d", &xvalue);

	int ret = (0 < xvalue) && (xvalue < 10);

	printf("xvalue�� 0�� 10���̿� %d\n", ret);

	// -----------------------
	
	int a = 20;
	int b = 30;

	int max = (a > b) ? a : b;	//��(3)�� ������
	printf("a�� b�߿� ū ���� : %d\n", max);

	(a > b) ? printf("a�� b���� ũ��") : printf("a�� b���� �۴�");


	return 0;
}