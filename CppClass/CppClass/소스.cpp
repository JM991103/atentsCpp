#include <iostream>

using namespace std;

//c++������ ������ �Լ����� ����� �� �ֽ��ϴ�.
//��ſ� �Ű������ ������ Ÿ���̳� ���� Ʋ���� �մϴ�.
//c++������ �Լ� ���̹��ϴ� ������� ���� �ͱ۸��̶�� ��
//���� �̸��� �Լ��� ����ϴ� ����� �����ε��̶�� ��(Over loading)

//int add(int a, int b) //addXX
//{
//	return a + b;
//}
//
//float add(float a, float b) // addYY
//{
//	return a + b;
//}
//
//float add(float a, int b) // addYX
//{
//	return a + b;
//}
//
//int add(float a, float b, float c) // addYYY
//{
//	return a + b + c;
//}

class Student {
private:
	string _name;	//�������
	int _age;
	int _grade;

public: 
	Student(string name, int age, int grade)
		:_name(name), _age(age), _grade(grade) {}
	
	void init(string name, int age, int grade) {
		_name = name;
		_age = age;
		_grade = grade;
	}

	void info() {
		cout << "�̸� : " << _name << endl;
		cout << "���� : " << _age << endl;
		cout << "�г� : " << _grade << endl;
	}

};


int global = 100;  //�ܺκ���, ��������

int SetScore(int value) {
	static int score = 0; //���ú���(��������), ��������
	global = 1000;
	score += value;

	return score;
}

//������ü
//������ ����
//���� ���� ���ӱⰢ
int main()
{
	//int a = 20;
	//int b = 30;
	//float c = 1.2f;
	//float d = 3.4f;
	//int ret = add(a, b); // call addXX
	//cout << a << " + " << b << " = " << ret << endl;
	//float fret = add(c, d); // call addYY
	//cout << c << " + " << d << " = " << fret << endl;
	//int a;  //���ú��� (��������), �ڵ����� 
	//a = 20;
	//global = 10000;

	//int* pa;	//�������� ������
	//pa = new int; //�����޸𸮰����� �Ҵ�
	//*pa = 1000; // * ������ ������, �ּҰ��� �Ҵ� ���� ������ ������ �� ���
	//cout << "*pa" << *pa << endl;
	//delete pa; //�����޸� ������ ��ȯó��

	//int count = 0;
	//cout << "�ʿ��� ���� �� ������ �Է��ϼ��� : " << endl;
	//cin >> count;
	//int* parray = new int[count];	//�����迭
	//for (int i =0; i < count; i++)
	//{
	//	parray[i] = i;
	//}
	//for (int i = 0; i < count; i++)
	//{
	//	cout << "parray{" << i << "] = " << parray[i] << endl;
	//}
	//
	//delete[] parray;	//�����迭 ��ȯ








	return 0;
}