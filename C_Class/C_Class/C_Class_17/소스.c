#include <stdio.h>

struct tagStudent {   // ����ü (����� ���� ����Ÿ Ÿ��)
    int No;   // �й� (����ü ���)
    int Age;   //����
    int Grade;   // �г�
    int ClassNum;   // �ݹ�ȣ
};

typedef struct tagStudent Student;

int Something() {
    struct tagStudent b;
    Student a;
}

int main() {
    Student a;
    a.No = 1234;
    a.Age = 13;
    a.Grade = 1;
    a.ClassNum = 3;

    // ����ü�� ����� �����Ҷ� ����ü ������ �ּҰ����� �����ϴ� ��쿡��
    // ->(ȭ��ǥ������)�� �����ؾ� �Ѵ�.
    Student* pa = &a;

    pa->No = 23454;
    pa->Age = 11;
    pa->Grade = 2;
    pa->ClassNum = 5;

    printf("pa->No = %d, pa->Age = %d, pa->Grade = %d, pa->ClassNum = %d\n"
        , pa->No, pa->Age, pa->Grade, pa->ClassNum);

    return 0;
}