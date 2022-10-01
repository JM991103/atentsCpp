#include <stdio.h>

// 존속기간, 접근범위

int global = 10;   // 외부변수, 전역변수

int add(int a, int b) {
    int temp;   // 자동변수, 로컬변수
    temp = a + b;

    global = 100;

    return temp;
}

int SetScore(int value) {
    static int score = 0;  // 정적변수, 로컬변수

    score += value;

    return score;
}

// 동일한 블럭 내부에는 동일한 변수명이 있을 수 없습니다.


int main() {
    global = 200;

    int a = 20;   // 자동변수, 로컬변수(지역변수)

    {
        int a = 100;   // 자동변수, 로컬변수


        a = 2000;
    }


    int b = 4000;

    for (int i = 0; i < 10; i++) {
        SetScore(i);
    }

    int ret = SetScore(0);

    printf("ret = %d\n", ret);

    return 0;
}