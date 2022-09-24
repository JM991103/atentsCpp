#include <stdio.h>

struct tagStudent {   // 구조체 (사용자 정의 데이타 타입)
	int No;   // 학번 (구조체 멤버)
	int Age;   //나이
	int Grade;   // 학년   
};

typedef struct tagStudent Student;

int main()
{
	Student array[10];	// 구조체 배열

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