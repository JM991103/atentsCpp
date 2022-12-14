#include <iostream>
#include <string>

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

//class Student {
//private:
//	string _name;	//멤버변수
//	int _age;
//	int _grade;
//
//public: 
//	Student() {} //기본 생성자
//	Student(string name, int age, int grade)
//		:_name(name), _age(age), _grade(grade) {}
//	
//	void init(string name, int age, int grade) { 
//		_name = name;
//		_age = age;
//		_grade = grade;
//	}
//
//	void info() {
//		cout << "이름 : " << _name << endl;
//		cout << "나이 : " << _age << endl;
//		cout << "학년 : " << _grade << endl;
//	}
//
//};

// 상속
//동물 농장 시뮬레이션
//돼지, 소, 닭

//특수화
//동물농장 시뮬레이션 만드는데
//돼지, 소, 닭
//상속의 장점
// 1. 기존의 클래스를 재사용
// 2. 공통된는 부분을 상위클래스에 통합하여 반복을 제거하고 유지, 보수를 편리하게 합니다.
// 3. 공통되는 부모를 가지는 계층을 만들어서 다향성의 기본 구조를 제공합니다.

class Parent {
public:
	int _value1;

};

class Child : public Parent {
public:
	int _value2;
};




//class Animal {
//protected:
//	string _name;
//	float _age;
//	float _weight;
//	float _height;
//
//
//
//public:
//	Animal(string name, float age, float weight, float height)
//		: _name(name), _age(age), _weight(weight), _height(height) {}
//
//	void Speak() {
//			cout << _name << "이 말합니다." << endl;
//	}
//
//	void Eat() {
//		cout << _name << "이 먹습니다" << endl;
//	}
//
//	void Run() {
//		cout << _name << "이 뜁니다." << endl;
//	}
//
//	void info() {
//		cout << "이름 : " << _name << endl;
//		cout << "나이 : " << _age << endl;
//		cout << "몸무게 : " << _weight << endl;
//		cout << "키 : " << _height << endl;
//	}
//};
//
//class Pig : public Animal{
//public:
//	Pig(string name, float age, float weight, float height)
//		:Animal(name, age, weight, height) {}
//
//	void Speak() {
//		cout << _name << "가 꿀꿀합니다." << endl;
//	}
//};
//
//class Cow : public Animal{
//public:
//	Cow(string name, float age, float weight, float height)
//		:Animal(name, age, weight, height) {}
//
//	void Speak() {
//		cout << _name << "이 음매합니다." << endl;
//	}
//};
//
//class Chicken : public Animal {
//private:
//	bool _isFly;
//
//	void Fly() {
//		cout << _name << "이 납니다." << endl;
//	}
//public:
//	Chicken(string name, float age, float weight, float height, bool _isFly)
//		:Animal(name, age, weight, height, _isFly) {}
//
//	void Speak() {
//		cout << _name << "이 꼬끼오합니다." << endl;
//	}
//
//	void Run() {
//		if (_isFly)
//		{
//			Fly();
//		}
//		else
//		{
//			cout << _name << "이 뜁니다" << endl;
//		}
//	}
//
//};
//
//class Dolphin : public Animal {
//private:
//	void Swim() {
//		cout << _name << "이 헤엄칩니다." << endl;
//	}
//public:
//	Dolphin(string name, float age, float weight, float height)
//		:Animal(name, age, weight, height) {}
//
//	void Speak() {
//		cout << _name << "이 끽끽합니다." << endl;
//	}
//	void Run() {
//		Swim();
//	}
//};

//class Stock {
//private:
//	string _name;
//	float _age;
//	float _weight;
//	float _height;
//
//public:
//	Stock(string name, float age, float weight, float height)
//		: _name(name), _age(age), _weight(weight), _height(height) {}
//
//	string GetName() {
//		return _name;
//	}
//
//	void Speak() {
//		cout << _name << "이 말합니다. " << endl;
//	}
//
//	void Eat() {
//		cout << _name << "이 먹습니다." << endl;
//	}
//
//	void Run() {
//		cout << _name << "이 뜁니다. " << endl;
//	}
//
//	void info() {
//		cout << "이름: " << _name << endl;
//		cout << "나이: " << _age << endl;
//		cout << "몸무게: " << _weight << endl;
//		cout << "키: " << _height << endl;
//	}
//
//};
//
//class Pig : public Stock {
//public:
//	Pig(string name, float age, float weight, float height)
//		: Stock(name, age, weight, height) {}
//
//	void Speak() {
//		cout << GetName() << "이 꿀꿀합니다." << endl;
//	}
//};
//
//class Cow : public Stock {
//public:
//	Cow(string name, float age, float weight, float height)
//		: Stock(name, age, weight, height) {}
//
//	void Speak() {
//		cout << GetName() << "이 음매합니다." << endl;
//	}
//
//};
//
//class Chicken : public Stock {
//private:
//	bool _isFly;
//
//	void Fly() {
//		cout << GetName() << "이 납니다." << endl;
//	}
//
//public:
//	Chicken(string name, float age, float weight, float height, bool isFly)
//		: Stock(name, age, weight, height), _isFly(isFly) {}
//
//	void Speak() {
//		cout << GetName() << "이 꼬끼오합니다." << endl;
//	}
//
//
//	void Run() {
//		if (_isFly) {
//			Fly();
//		}
//		else {
//			cout << GetName() << "이 뜁니다." << endl;
//		}
//	}
//
//	void info() {
//		Stock::info();
//		if (_isFly) {
//			cout << "종류: 나는 닭" << endl;
//		}
//		else {
//			cout << "종류: 못나는 닭" << endl;
//		}
//	}
//
//};
//
//class Horse : public Stock {
//public:
//	Horse(string name, float age, float weight, float height)
//		: Stock(name, age, weight, height) {}
//
//	void Speak() {
//		cout << GetName() << "이 히잉합니다." << endl;
//	}
//};

//int global = 100;  //외부변수, 전역변수
//int SetScore(int value) {
//	static int score = 0; //로컬변수(지역변수), 정적변수
//	global = 1000;
//	score += value;
//
//	return score;
//}

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

	//Student* pa= new Student("monster", 10, 3); //동적객체
	//pa->info(); //주소값으로 클래스의 멤버에 접근할때는 화살표 연산자를 사용한다.
	//delete pa; //동적객체 반환
	//Student * parray = new Student[5];	//동적객체 배열 기본 생성자가 필요함
	//for (int i = 0; i <5; i++)
	//{
	//	parray[i].init("monster", i, i);	//init클래스에 매개변수로 값을 넣음
	//}
	//for (int i = 0; i < 5; i++)
	//{
	//	parray[i].info();	//info클래스에 들어있는 출력문을 실행 함
	//}
	//delete[] parray;	//동적객체 배열 할당 해제..

	/*Cow cow("소", 2.2f, 200.0f, 1.5f);
	Pig pig("돼지", 2.5f, 150.0f, 1.3f);
	Chicken flyChicken("나는닭", 0.5f, 2.5f, 0.3f, true);
	Chicken notFlyChicken("못나는닭", 0.5f, 2.5f, 0.3f, false);
	Horse horse("말", 1.3f, 180.0f, 2.0f);

	cow.Speak();
	cow.Run();

	cout << endl;

	pig.Speak();
	pig.Run();

	cout << endl;

	flyChicken.Speak();
	flyChicken.Run();

	cout << endl;

	notFlyChicken.Speak();
	notFlyChicken.Run();

	cout << endl;
	
	horse.Speak();
	horse.Run();*/
	
	//Cow cow("소", 1.2f, 230.0f, 1.8f);
	//Pig pig("돼지", 1.2f, 230.0f, 1.8f);
	//Chicken notFlyChicken("못나는 닭", 1.2f, 230.0f, 1.8f, false);
	//Chicken FlyChicken("나는 닭", 1.2f, 230.0f, 1.8f, true);
	//Dolphin dolphin("돌고래", 2.3f, 200.0f, 1.5f);

	//cow.Speak();
	//cow.Run();

	//cout << endl;
	//pig.Speak();
	//pig.Run();

	//cout << endl;
	//notFlyChicken.Speak();
	//notFlyChicken.Run();

	//cout << endl;
	//FlyChicken.Speak();
	//FlyChicken.Run();

	//cout << endl;
	//dolphin.Speak();
	//dolphin.Run();

	Parent a;
	Child b;
	a._value1 = 100;
	b._value1 = 300;
	b._value2 = 400;



	// 부모의 데이타 타입에 자식의 데이타 타입을 대입할 수 있습니다.
	// 업캐스팅
	cout << "a._value1 = " << a._value1 << endl;
	a = b;
	
	cout << "a._value1 = " << a._value1 << endl;
	
	// 자식의 데이타 타입에 부모의 데이타 타입을 대입하는 것 (기본적으로 허용하지 않습니다.);
	// 다운캐스팅
	//b = a;
	
	Parent& refa = b;   // 업캐스팅
	
	cout << "refa._value1 = " << refa._value1 << endl;
	
	Child& refaa = (Child&)refa;   // 다운 캐스팅
	
	cout << "refaa._value1 = " << refaa._value1 << endl;
	cout << "refaa._value2 = " << refaa._value2 << endl;
	
	
	Parent* pa = &b;   // 업캐스팅
	pa->_value1 = 100;
	cout << "pa->_value1 = " << pa->_value1 << endl;

	
	Child* paa = (Child*)pa;   // 다운캐스팅
	cout << "paa->_value1 = " << paa->_value1 << endl;
	cout << "paa->_value2 = " << paa->_value2 << endl;











	return 0;
}