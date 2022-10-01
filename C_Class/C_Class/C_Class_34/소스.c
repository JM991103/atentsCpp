#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main() {
    char str[] = "Monster";
    char str2[30];
    char str3[] = " Is World!!";
    char str4[] = "Monster";

    // 문자열의 갯수구하는 함수
    int count = strlen(str);
    printf("%s의 문자열의 갯수는 %d\n", str, count);

    // 문자열 복사 함수
    strcpy(str2, str);

    printf("str2 = %s\n", str2);

    // 문자열 병행 함수

    strcat(str2, str3);

    printf("str2 = %s\n", str2);


    // 문자열 비교함수
    // 두 문자열이 같은 경우에 0을 리턴
    // 다르면 1이나 -1을 리턴
    if (!strcmp(str, str4)) {
        printf("두문자열이 같습니다.");
    }


    return 0;

}