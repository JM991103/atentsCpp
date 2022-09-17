#include <stdio.h>

// 포인터
int main() {
    int a;

    a = 20;

    printf("&a = %p\n", &a);

    int* pa;   // 포인터형 지정자
    pa = &a;

    int** ppa;
    ppa = &pa;

    **ppa;   // 포인터 연산자
    **&pa;
    *pa;
    *&a;
    a;

    printf("&**ppa = %p, &**&pa = %p, &*pa = %p, &*&a = %p, &a = %p\n"
        , &**ppa, &**&pa, &*pa, &*&a, &a);

    printf("**ppa = %d, **&pa = %d, *pa = %d, *&a = %d, a = %d"
        , **ppa, **&pa, *pa, *&a, a);

    return 0;
}