#include <stdio.h>


void PrintArray(int* parray, int size) {

    for (int i = 0; i < size; i++) {
        printf("parray[%d] = %d\n", i, parray[i]);
    }

}

int main() {

    int array[100];   // 400

    for (int i = 0; i < 100; i++) {
        array[i] = i;
    }

    // 배열의 주소값을 PrintArray함수에 전달해서
    // PrintArray함수에서 main에 있는 배열에 접근해서 값을 출력
    PrintArray(array, 100);


    return 0;
}