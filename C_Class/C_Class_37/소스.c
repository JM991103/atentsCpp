#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    int buff[] = { 10, 20, 30, 40, 50 };

    FILE* fp;

    int size, count;

    // 바이너리 파일 쓰기
    fp = fopen("binary.bin", "wb");

    if (fp == NULL) {
        printf("파일 열기 실패");
        return 0;
    }

    size = sizeof(int); // 요소의 사이즈
    count = sizeof(buff) / sizeof(int);   // buff 배열의 요소의 갯수

    fwrite(buff, size, count, fp);

    fclose(fp);

    int output[5];
    // 바이너리 파일 읽기
    fp = fopen("binary.bin", "rb");

    if (fp == NULL) {
        printf("파일 열기 실패");
        return 0;
    }

    /*
    for (int i = 0; i < count; i++) {
       fread(&output[i], size, 1, fp);
    }
    */

    fread(output, size, 5, fp);

    for (int i = 0; i < count; i++) {
        printf("output[%d] = %d\n", i, output[i]);
    }

    fclose(fp);

    return 0;
}