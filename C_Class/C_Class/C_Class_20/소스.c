#include <stdio.h>

int main() {
    int array[10];

    array[0] = 10;   // �迭��

    *(array + 1) = 20;   // �����ͽ�


    for (int i = 0; i < 10; i++) {
        *(array + i) = i;
    }

    for (int i = 0; i < 10; i++) {
        printf("*(array + %d) = %d\n", i, *(array + i));
    }
    

    return 0;
}