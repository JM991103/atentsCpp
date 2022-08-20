#include <iostream>

using namespace std;

//c++에서는 동일한 함수명을 사용할 수 있습니다.
//대신에 매개면수의 데이터 타입이나 갯수 틀려야 합니다.
//c++에서는 함수 네이밍하는 방법으로 네임 맹글링이라고 함
//같은 이름의 함수를 사용하는 방법을 오버로딩이라고 함(Over loading)

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
	string _name;	//멤버변수
	int _age;
	int _grade;

public: 
	Student() {} //기본 생성자
	Student(string name, int age, int grade)
		:_name(name), _age(age), _grade(grade) {}
	
	void init(string name, int age, int grade) { 
		_name = name;
		_age = age;
		_grade = grade;
	}

	void info() {
		cout << "이름 : " << _name << endl;
		cout << "나이 : " << _age << endl;
		cout << "학년 : " << _grade << endl;
	}

};


int global = 100;  //외부변수, 전역변수

int SetScore(int value) {
	static int score = 0; //로컬변수(지역변수), 정적변수
	global = 1000;
	score += value;

	return score;
}

//동적객체
//변수의 종류
//접근 범위 존속기각
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
	//int a;  //로컬변수 (지역변수), 자동변수 
	//a = 20;
	//global = 10000;

	//int* pa;	//포인터형 지정자
	//pa = new int; //동적메모리공간을 할당
	//*pa = 1000; // * 포인터 연산자, 주소값에 할당 받은 공간에 접솔할 때 사용
	//cout << "*pa" << *pa << endl;
	//delete pa; //동적메모리 공간으 반환처리

	//int count = 0;
	//cout << "필요한 정수 의 갯수를 입력하세요 : " << endl;
	//cin >> count;
	//int* parray = new int[count];	//동적배열
	//for (int i =0; i < count; i++)
	//{
	//	parray[i] = i;
	//}
	//for (int i = 0; i < count; i++)
	//{
	//	cout << "parray{" << i << "] = " << parray[i] << endl;
	//}
	//
	//delete[] parray;	//동적배열 반환

	Student* pa= new Student("monster", 10, 3); //동적객체

	pa->info(); //주소값으로 클래스의 멤버에 접근할때는 화살표 연산자를 사용한다.

	delete pa; //동적객체 반환

	Student * parray = new Student[5];	//동적객체 배열 기본 생성자가 필요함

	for (int i = 0; i <5; i++)
	{
		parray[i].init("monster", i, i);	//init클래스에 매개변수로 값을 넣음
	}
	for (int i = 0; i < 5; i++)
	{
		parray[i].info();	//info클래스에 들어있는 출력문을 실행 함
	}

	delete[] parray;	//동적객체 배열 할당 해제..

	return 0;
}