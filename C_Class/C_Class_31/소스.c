#include <stdio.h>

int main() {
    int array[10][10];   // 이차원배열

    printf("array = %d\n", array);

    printf("array = %d\n", array + 1);

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            array[i][j] = i * 10 + j;
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("array[%d][%d] = %d\n", i, j, array[i][j]);
        }
    }


    return 0;
}