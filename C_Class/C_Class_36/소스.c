#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ���� �����
int main() {
    FILE* fp;

    // ���� ����
    fp = fopen("test.txt", "w");

    if (fp == NULL) {
        printf("���� ���⿡ ����!!");
        return 0;
    }

    fputc('a', fp);
    fputc('b', fp);
    fputc('c', fp);

    fclose(fp);

    // ���� �б�
    fp = fopen("test.txt", "r");

    if (fp == NULL) {
        printf("���� ���� ����");

        return 0;
    }
    char c;
    while ((c = fgetc(fp)) != EOF) {
        putchar(c);
    }

    fclose(fp);
    return 0;
}