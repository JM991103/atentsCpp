#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 파일 입출력
int main() {
    FILE* fp;

    // 파일 쓰기
    fp = fopen("test.txt", "w");

    if (fp == NULL) {
        printf("파일 열기에 실패!!");
        return 0;
    }

    fputc('a', fp);
    fputc('b', fp);
    fputc('c', fp);

    fclose(fp);

    // 파일 읽기
    fp = fopen("test.txt", "r");

    if (fp == NULL) {
        printf("파일 열기 실패");

        return 0;
    }
    char c;
    while ((c = fgetc(fp)) != EOF) {
        putchar(c);
    }

    fclose(fp);
    return 0;
}