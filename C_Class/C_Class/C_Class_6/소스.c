#include <stdio.h>

int main() {

#include <stdio.h>

	int main() {
		// 대입연산자, 할당연산자
		float c = 1.2f;
		int a;
		int b;
		a = 20;

		b = 30;

		a = b;

		// Left value = Right Value

		// Left value와 Right Value의 데이타 타입이 일치해야 대입일어납니다.

		a = c;   // 기본 데이타 타입간에 대입은 컴파일러가 자동으로 형변환을 시켜줍니다.

		// 컴파일러가 자동으로 형변환을 시켜주는 것을 묵시적형변환이라고 합니다.

		a = (int)c; // 명시적으로 형변환을 해주시는 것이 좋습니다.



	return 0;
}