#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int money = 0;

    printf("�뵷�� �Է��ϼ���: ");
    scanf("%d", &money);

    if (money <= 60000 && money > 40000) {
        printf("������\n");
    }
    else if (money > 100000) { // ���� ���ǹ�
        printf("����\n");
    }
    else if (money <= 100000 && money > 80000) {
        printf("PC��\n");
    }
    else if (money <= 80000 && money > 60000) {
        printf("�籸��\n");
    }
    else if (money <= 40000 && money > 20000) {
        printf("�뷡��\n");
    }
    else {   // ������ ���� ������ ���� �ƴҶ�, ó���ؾ� �ϸ� ���
        printf("����\n");
    }


    int buttonNum = 0;

    printf("������ ��ư ��ȣ�� �Է��ϼ���: ");

    scanf("%d", &buttonNum);

    // �������� ��ȭ�� ���� �б⸦ ��ų��
    // switch-case���� ����ϴ� ���� �����մϴ�.

    switch (buttonNum) {
    case 0:
        printf("TV ��\n");
        break;

    case 1:
        printf("TV ��\n");
        break;

    case 2:
        printf("������\n");
        break;

    case 3:
        printf("�����ٿ�\n");
        break;

    case 10:
        printf("ä�� ��\n");
        break;
    case 11:
        printf("ä�� �ٿ�\n");
        break;

    default:
        printf("Wrong Number\n");
        break;
    }


	return 0;
}