#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main() {
    char str[] = "Monster";
    char str2[30];
    char str3[] = " Is World!!";
    char str4[] = "Monster";

    // ���ڿ��� �������ϴ� �Լ�
    int count = strlen(str);
    printf("%s�� ���ڿ��� ������ %d\n", str, count);

    // ���ڿ� ���� �Լ�
    strcpy(str2, str);

    printf("str2 = %s\n", str2);

    // ���ڿ� ���� �Լ�

    strcat(str2, str3);

    printf("str2 = %s\n", str2);


    // ���ڿ� ���Լ�
    // �� ���ڿ��� ���� ��쿡 0�� ����
    // �ٸ��� 1�̳� -1�� ����
    if (!strcmp(str, str4)) {
        printf("�ι��ڿ��� �����ϴ�.");
    }


    return 0;

}