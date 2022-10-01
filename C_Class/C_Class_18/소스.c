#include <stdio.h>

struct tagStudent {   // ����ü (����� ���� ����Ÿ Ÿ��)
    int No;   // �й� (����ü ���)
    int Age;   //����
    int Grade;   // �г�
    struct tagStudent* Next;   // ���� �л� ����� �ּҰ� ����
};

typedef struct tagStudent Student;

int main() {

    Student a;
    Student b;
    Student c;

    a.No = 1234;
    a.Age = 12;
    a.Grade = 2;
    a.Next = &b;

    b.No = 2345;
    b.Age = 11;
    b.Grade = 4;
    b.Next = &c;

    c.No = 5677;
    c.Age = 13;
    c.Grade = 5;
    c.Next = NULL;


    printf("a.Next->Next->No = %d, a.Next->Next->Age = %d, a.Next->Next->Grade = %d\n",
        a.Next->Next->No, a.Next->Next->Age, a.Next->Next->Grade);


    return 0;
}