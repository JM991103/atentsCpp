#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    int column = 0;
    int row = 0;

    int** pparray = NULL;

    printf("세로열과 가로열을 입력하세요(10 10): ");
    scanf("%d %d", &column, &row);

    pparray = (int**)malloc(sizeof(int*) * column);

    for (int i = 0; i < column; i++) {
        pparray[i] = (int*)malloc(sizeof(int) * row);
    }

    for (int i = 0; i < column; i++) {
        for (int j = 0; j < row; j++) {
            pparray[i][j] = i * row + j;
        }
    }

    for (int i = 0; i < column; i++) {
        for (int j = 0; j < row; j++) {
            printf("pparray[%d][%d] = %d\n", i, j, pparray[i][j]);
        }
    }

    for (int i = 0; i < column; i++) {
        free(pparray[i]);
    }

    free(pparray);



    return 0;
}