#include <stdio.h>

int main()
{
        int a = 20;
        int b = 30;

        if (a > 10) {   // 단일 조건문
            printf("a는 10보다 크다.\n");
        }

        if (a > 10) {   // 이중 조건문
            printf("a는 10보다 크다\n");
        }
        else {
            printf("a는 10보다 작거나 같다.\n");
        }


        if (!(a - 20)) {
            printf("a는 20과 같다.\n");
        }



	return 0;
}