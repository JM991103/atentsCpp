#include <stdio.h>

// ���ӱⰣ, ���ٹ���

int global = 10;   // �ܺκ���, ��������

int add(int a, int b) {
    int temp;   // �ڵ�����, ���ú���
    temp = a + b;

    global = 100;

    return temp;
}

int SetScore(int value) {
    static int score = 0;  // ��������, ���ú���

    score += value;

    return score;
}

// ������ �� ���ο��� ������ �������� ���� �� �����ϴ�.


int main() {
    global = 200;

    int a = 20;   // �ڵ�����, ���ú���(��������)

    {
        int a = 100;   // �ڵ�����, ���ú���


        a = 2000;
    }


    int b = 4000;

    for (int i = 0; i < 10; i++) {
        SetScore(i);
    }

    int ret = SetScore(0);

    printf("ret = %d\n", ret);

    return 0;
}