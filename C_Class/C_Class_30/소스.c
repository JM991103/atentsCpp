#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct tagStudent {
    int age;
    int grade;
    int classNum;
};

typedef struct tagStudent Student;

// 포인터 배열
// 메모리 공간상에 주소값을 저장하는 배열
// int* parray[10];
// double* parray[10];

int main() {
    int count = 0;
    Student** pparray;
    printf("입력하실 학생수를 입력하세요: ");
    scanf("%d", &count);

    pparray = (Student**)malloc(sizeof(Student*) * count);

    for (int i = 0; i < count; i++) {
        pparray[i] = (Student*)malloc(sizeof(Student));
        printf("%d번째 학생정보를 입력하세요(나이 학년 반) : ", i + 1);
        scanf("%d %d %d", &pparray[i]->age, &pparray[i]->grade, &pparray[i]->classNum);
    }


    for (int i = 0; i < count; i++) {
        printf("나이: %d, 학년: %d, 반: %d\n", pparray[i]->age, pparray[i]->grade, pparray[i]->classNum);
    }

    for (int i = 0; i < count; i++) {
        free(pparray[i]);
    }

    free(pparray);

    return 0;
}