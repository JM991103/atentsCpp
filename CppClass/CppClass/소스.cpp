#include <iostream>

using namespace std;

//c++에서는 동일한 함수명을 사용할 수 있습니다.
//대신에 매개면수의 데이터 타입이나 갯수 틀려야 합니다.
//c++에서는 함수 네이밍하는 방법으로 네임 맹글링이라고 함
//같은 이름의 함수를 사용하는 방법을 오버로딩이라고 함(Over loading)

int add(int a, int b) //addXX
{
	return a + b;
}

float add(float a, float b) // addYY
{
	return a + b;
}

float add(float a, int b) // addYX
{
	return a + b;
}

int add(float a, float b, float c) // addYYY
{
	return a + b + c;
}


int main()
{
	int a = 20;
	int b = 30;
	float c = 1.2f;
	float d = 3.4f;

	int ret = add(a, b); // call addXX
	cout << a << " + " << b << " = " << ret << endl;

	float fret = add(c, d); // call addYY
	cout << c << " + " << d << " = " << fret << endl;

	return 0;
}