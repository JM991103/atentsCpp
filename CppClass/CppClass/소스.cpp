#include <iostream>

using namespace std;

//c++������ ������ �Լ����� ����� �� �ֽ��ϴ�.
//��ſ� �Ű������ ������ Ÿ���̳� ���� Ʋ���� �մϴ�.
//c++������ �Լ� ���̹��ϴ� ������� ���� �ͱ۸��̶�� ��
//���� �̸��� �Լ��� ����ϴ� ����� �����ε��̶�� ��(Over loading)

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