#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// ��ũ�� ���
/*
#define NORTH 0
#define SOUTH 1
#define WEST 2
#define EAST 3
*/

//������
enum Direction {
    NORTH,  // 0���� ����
    SOUTH,  // ���� ���� 1
    WEST,   // WEST = 5; <- �̷��� �Է��ϸ� 5���� ����
    EAST    // ������ 6�� ��
};

// �����ѹ��� ��������
// �ش� ���ڰ� �ǹ��ϴ� �ܾ ������ ���



int main() {
    srand(time(NULL)); // ���� ���尪 ����

    const int North = 0;    // const ���
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