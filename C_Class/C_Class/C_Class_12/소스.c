#include <stdio.h>

int main() {

    for (int i = 0; i < 100; i++) {
        if (i % 2 != 0) {
            continue;   // 선언된 위치에서 이후의 명령어를 건너뛸때 사용
        }

        printf("i = %d\n", i);
    }


    int a = 0;
    while (1) {
        while (1) {

            if (a > 100) {
                break;   // break문이 선언된 위치에서 가장 가까운 반복문을 탈출
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
                goto LoopExit;   // 중첩된 반복문을 한번에 탈출할때 goto문을 사용;
            }

            printf("goto a = %d\n", a);
            a++;
        }

    }

LoopExit:;
    return 0;
}
