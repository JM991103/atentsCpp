#include <stdio.h>

int main() {

    for (int i = 0; i < 100; i++) {
        if (i % 2 != 0) {
            continue;   // ����� ��ġ���� ������ ��ɾ �ǳʶ۶� ���
        }

        printf("i = %d\n", i);
    }


    int a = 0;
    while (1) {
        while (1) {

            if (a > 100) {
                break;   // break���� ����� ��ġ���� ���� ����� �ݺ����� Ż��
            }
            printf("break a = %d\n", a);
            a++;
        }

        if (a > 100) {
            break;
        }
    }

    printf("\n\ngoto Exit\n");

    a = 0;
    while (1) {
        while (1) {

            if (a > 100) {
                goto LoopExit;   // ��ø�� �ݺ����� �ѹ��� Ż���Ҷ� goto���� ���;
            }

            printf("goto a = %d\n", a);
            a++;
        }

    }

LoopExit:;
    return 0;
}
