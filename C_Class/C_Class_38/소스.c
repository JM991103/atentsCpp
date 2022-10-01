#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 매크로 상수
/*
#define NORTH 0
#define SOUTH 1
#define WEST 2
#define EAST 3
*/

//열거형
enum Direction {
    NORTH,  // 0부터 시작
    SOUTH,  // 다음 숫자 1
    WEST,   // WEST = 5; <- 이렇게 입력하면 5부터 시작
    EAST    // 다음은 6이 됨
};

// 매직넘버를 쓰지말고
// 해당 숫자가 의미하는 단어나 문장을 사용



int main() {
    srand(time(NULL)); // 난수 씨드값 생성

    const int North = 0;    // const 상수
    const int South = 1;
    const int West = 2;
    const int East = 3;

    int randValue = rand();
    int direction = randValue % 4;

    switch (direction) {
    case NORTH:
        printf("North\n");
        break;

    case SOUTH:
        printf("South\n");
        break;

    case WEST:
        printf("West\n");
        break;

    case EAST:
        printf("East\n");
        break;
    }


    return 0;
}