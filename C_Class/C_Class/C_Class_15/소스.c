#include <stdio.h>

int main() {
    // ����Ÿ�� ���������� �����ؾ� �� ���� �ֽ��ϴ�.
    // �츮�� �迭�� ����մϴ�.

    // DataType �迭��[�迭 ����� ����];

    float heightArray[10];

    //heightArray = 2.3f;

    for (int i = 0; i < 10; i++) 
    {
        heightArray[i] = 1.2f * i;
    }


    for (int i = 0; i < 10; i++) 
    {
        printf("heightArray[%d] = %f\n", i, heightArray[i]);
        if (heightArray[i] >= 3.59f && heightArray[i] <= 3.61f) 
        {
            printf("3.6f�� �迭�� %d ��° ����ֽ��ϴ�.\n", i);
        }
    }

    float sum = 0.0f;
    for (int i = 0; i < 10; i++) 
    {
        sum += heightArray[i];

    }

    printf("�迭�ȿ� ���� ������ �հ�� : %f\n", sum);



    return 0;
}