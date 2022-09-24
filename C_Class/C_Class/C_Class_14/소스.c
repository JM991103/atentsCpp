#include <stdio.h>

int main() {
    // 0 ~ 100 까지 저장하세요..

    // 변수를 101개 만들어야 합니다.

    int a0 = 0;
    int a1 = 1;
    int a2 = 2;
    //...
    int a99 = 99;
    int a100 = 100;

    if (a0 % 2 == 0) {
        printf("%d는 짝수 입니다.\n");
    }

    if (a1 % 2 == 0) {
        printf("%d는 짝수 입니다.\n");
    }

    if (a2 % 2 == 0) {
        printf("%d는 짝수 입니다.\n");
    }

    // 동일한 데이타 타입의 공간이 여러개 필요할때 
    // 사용하는 기능있습니다.
    // 배열이라고 합니다.

    int array[101];

    for (int i = 0; i < 101; i++) {
        array[i] = i;
    }


    for (int i = 0; i < 101; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }




    return 0;
}