#include <stdio.h>



struct Student {   // ����ü (����� ���� ����Ÿ Ÿ��)
	int No;   // �й� (����ü ���)
	int Age;   //����
	int Grade;   // �г�
	int ClassNum;   // �ݹ�ȣ
};

int main() {
	// �л������� ���α׷�.
	// �й�, �̸�, ����, ����, �г�

	int No;   // �й�
	int Age;   //����
	int Grade;   // �г�
	int ClassNum;   // �ݹ�ȣ

	// 100��
	// ������ ������ ����� ���
	// int No0, No1, No2,

	// �迭�� ���� ���

	int NoArray[100];
	int AgeArray[100];
	int GradeArray[100];
	int ClassNumArray[100];


	NoArray[0] = 1234;   // �й�
	AgeArray[0] = 13;   // ����
	GradeArray[0] = 3;   // �ݹ�ȣ
	ClassNumArray[0] = 11; // �ݹ�ȣ

	NoArray[1] = 1234;   // �й�
	AgeArray[1] = 13;   // ����
	GradeArray[1] = 3;   // �ݹ�ȣ
	ClassNumArray[1] = 11; // �ݹ�ȣ

	// ������ ����� �ֽ��ϴ�.
	// ���� �������ִ� ����Ÿ�� �ϳ��� �����ִ� ����ֽ��ϴ�.
	// ����ü��� �մϴ�.

	// ����ü ����
	struct Student a;

	// ����ü ������ ��� �����Ҷ��� .(period)�����ڸ� ����մϴ�.
	a.No = 12312;
	a.Age = 10;
	a.Grade = 2;
	a.ClassNum = 11;

	printf("a.No = %d, a.Age = %d, a.Grade = %d, a.ClassNum = %d\n", a.No, a.Age, a.Grade, a.ClassNum);

	return 0;
}