#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// ��������
int main() {
    int count = 0;
    int value = 0;

    printf("�Է��Ͻ� ������ ������ �Է��ϼ���.");
    scanf("%d", &count);

    int* parray = (int*)malloc(sizeof(int) * count); // ���� �޸� �����Ҵ�   // malloc, calloc, realloc
    //int* parray = (int*)calloc(count, sizeof(int)); // ���� �޸𸮰����� �Ҵ��ϸ鼭 �ʱ�ȭ ����
    for (int i = 0; i < count; i++) {
        printf("%d��° ���� �Է��ϼ���: ", i + 1);
        scanf("%d", &parray[i]);
    }

    for (int i = 0; i < count; i++) {
        printf("parray[%d] = %d\n", i, parray[i]);
    }

    free(parray);   // �����޸� ���� �ݳ�ó��


    return 0;
}