#include <stdio.h>

struct tagStudent {   // ����ü (����� ���� ����Ÿ Ÿ��)
	int No;   // �й� (����ü ���)
	int Age;   //����
	int Grade;   // �г�   
};

typedef struct tagStudent Student;

int main()
{
	Student array[10];	// ����ü �迭

	for (int i = 0; i < 10; i++)
	{
		array[i].No = i;
		array[i].Age = i + 8;
		array[i].Grade = i % 3 + 1;
	}
	for (int i = 0; i < 10; i++)
	{
		printf("array[%d].No = %d\n", i, array[i].No);
		printf("array[%d].Age = %d\n", i, array[i].Age);
		printf("array[%d].Grade = %d\n", i, array[i].Grade);

	}

}