#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// 동적변수
int main() {
    int count = 0;
    int value = 0;

    printf("입력하실 정수의 갯수를 입력하세요.");
    scanf("%d", &count);

    int* parray = (int*)malloc(sizeof(int) * count); // 동적 메모리 공간할당   // malloc, calloc, realloc
    //int* parray = (int*)calloc(count, sizeof(int)); // 동적 메모리공간을 할당하면서 초기화 진행
    for (int i = 0; i < count; i++) {
        printf("%d번째 값을 입력하세요: ", i + 1);
        scanf("%d", &parray[i]);
    }

    for (int i = 0; i < count; i++) {
        printf("parray[%d] = %d\n", i, parray[i]);
    }

    free(parray);   // 동적메모리 공간 반납처리


    return 0;
}