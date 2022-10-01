#include <stdio.h>

int main() {
    // 데이타를 순차적으로 저장해야 할 때가 있습니다.
    // 우리는 배열을 사용합니다.

    // DataType 배열명[배열 요소의 갯수];

    float heightArray[10];

    //heightArray = 2.3f;

    for (int i = 0; i < 10; i++) 
    {
        heightArray[i] = 1.2f * i;
    }


    for (int i = 0; i < 10; i++) 
    {
        printf("heightArray[%d] = %f\n", i, heightArray[i]);
        if (heightArray[i] >= 3.59f && heightArray[i] <= 3.61f) 
        {
            printf("3.6f는 배열의 %d 번째 들어있습니다.\n", i);
        }
    }

    float sum = 0.0f;
    for (int i = 0; i < 10; i++) 
    {
        sum += heightArray[i];

    }

    printf("배열안에 들은 숫자의 합계는 : %f\n", sum);



    return 0;
}