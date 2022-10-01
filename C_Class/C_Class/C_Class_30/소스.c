#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct tagStudent {
    int age;
    int grade;
    int classNum;
};

typedef struct tagStudent Student;

// ������ �迭
// �޸� ������ �ּҰ��� �����ϴ� �迭
// int* parray[10];
// double* parray[10];

int main() {
    int count = 0;
    Student** pparray;
    printf("�Է��Ͻ� �л����� �Է��ϼ���: ");
    scanf("%d", &count);

    pparray = (Student**)malloc(sizeof(Student*) * count);

    for (int i = 0; i < count; i++) {
        pparray[i] = (Student*)malloc(sizeof(Student));
        printf("%d��° �л������� �Է��ϼ���(���� �г� ��) : ", i + 1);
        scanf("%d %d %d", &pparray[i]->age, &pparray[i]->grade, &pparray[i]->classNum);
    }


    for (int i = 0; i < count; i++) {
        printf("����: %d, �г�: %d, ��: %d\n", pparray[i]->age, pparray[i]->grade, pparray[i]->classNum);
    }

    for (int i = 0; i < count; i++) {
        free(pparray[i]);
    }

    free(pparray);

    return 0;
}