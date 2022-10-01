#include <stdio.h>

// 문자열

int PrintStr(char* str, int size) {
    for (int i = 0; i < size; i++) {
        putchar(str[i]);
    }
}

void PrintStr2(char* str) {
    while (*str) {
        putchar(*str++);
    }
}


int main() {
    char str[] = { 'M', '0', 'N' };   // 문자배열
    char str2[] = "MON";         // 문자열
    char str3[] = { 'M', 'O', 'N', 0 };




    printf("str size = %d\n", sizeof(str));
    printf("str2 size = %d\n", sizeof(str2));

    PrintStr(str, 3);
    printf("\n");
    PrintStr2(str2);
    printf("\n");
    PrintStr2(str3);



    return 0;
}