#include <stdio.h>


void PrintArray(int* parray, int size) {

    for (int i = 0; i < size; i++) {
        printf("parray[%d] = %d\n", i, parray[i]);
    }

}

int main() {

    int array[100];   // 400

    for (int i = 0; i < 100; i++) {
        array[i] = i;
    }

    // �迭�� �ּҰ��� PrintArray�Լ��� �����ؼ�
    // PrintArray�Լ����� main�� �ִ� �迭�� �����ؼ� ���� ���
    PrintArray(array, 100);


    return 0;
}