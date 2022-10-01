#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int money = 0;

    printf("용돈을 입력하세요: ");
    scanf("%d", &money);

    if (money <= 60000 && money > 40000) {
        printf("오락실\n");
    }
    else if (money > 100000) { // 다중 조건문
        printf("저축\n");
    }
    else if (money <= 100000 && money > 80000) {
        printf("PC방\n");
    }
    else if (money <= 80000 && money > 60000) {
        printf("당구장\n");
    }
    else if (money <= 40000 && money > 20000) {
        printf("노래방\n");
    }
    else {   // 생략이 가능 이저도 저도 아닐때, 처리해야 하면 사용
        printf("낮잠\n");
    }


    int buttonNum = 0;

    printf("리모컨 버튼 번호를 입력하세요: ");

    scanf("%d", &buttonNum);

    // 정수값의 변화에 따라서 분기를 시킬때
    // switch-case문을 사용하는 것이 유리합니다.

    switch (buttonNum) {
    case 0:
        printf("TV 켜\n");
        break;

    case 1:
        printf("TV 꺼\n");
        break;

    case 2:
        printf("볼륨업\n");
        break;

    case 3:
        printf("볼륨다운\n");
        break;

    case 10:
        printf("채널 업\n");
        break;
    case 11:
        printf("채널 다운\n");
        break;

    default:
        printf("Wrong Number\n");
        break;
    }


	return 0;
}