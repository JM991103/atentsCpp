#include <stdio.h>

int main() {

    // for (초기식; 조건식; 증감식) {
    //  반복할 명령어를 나열
    // }
    // for문은 반복횟수를 아는 경우 사용하기 좋은 구조입니다.
    for (int i = 0; i < 10; i++) {   // 단일 for문
        printf("i = %d\n", i);
    }

    for (int i = 0; i < 10; i++) {   // 이중 for문
        for (int j = 0; j < 10; j++) {
            printf("i = %d, j= %d\n", i, j);
        }
    }

    for (int i = 0, j = 10; i < 10 && j > 0; i += 2, j -= 2) {
        printf("i = %d, j = %d\n", i, j);
    }

    /*
    int i = 10;
    for (;i > 0;) {

    }
    */

    float a = 3000.1231f;
    a = -1;
    while (a > 0) {
        a -= 234.42f;
        printf("while a = %f\n", a);
    }


    a = 3000.123f;
    a = -1;
    do {
        a -= 234.42f;
        printf("do-while a = %f\n", a);

    } while (a > 0);



    return 0;
}