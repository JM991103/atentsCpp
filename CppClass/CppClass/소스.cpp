#include <iostream>
#include <string>

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

//class Student {
//private:
//	string _name;	//�������
//	int _age;
//	int _grade;
//
//public: 
//	Student() {} //�⺻ ������
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
//		cout << "�̸� : " << _name << endl;
//		cout << "���� : " << _age << endl;
//		cout << "�г� : " << _grade << endl;
//	}
//
//};

// ���
//���� ���� �ùķ��̼�
//����, ��, ��

//Ư��ȭ
//�������� �ùķ��̼� ����µ�
//����, ��, ��
//����� ����
// 1. ������ Ŭ������ ����
// 2. ����ȴ� �κ��� ����Ŭ������ �����Ͽ� �ݺ��� �����ϰ� ����, ������ ���ϰ� �մϴ�.
// 3. ����Ǵ� �θ� ������ ������ ���� ���⼺�� �⺻ ������ �����մϴ�.

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
//			cout << _name << "�� ���մϴ�." << endl;
//	}
//
//	void Eat() {
//		cout << _name << "�� �Խ��ϴ�" << endl;
//	}
//
//	void Run() {
//		cout << _name << "�� �ݴϴ�." << endl;
//	}
//
//	void info() {
//		cout << "�̸� : " << _name << endl;
//		cout << "���� : " << _age << endl;
//		cout << "������ : " << _weight << endl;
//		cout << "Ű : " << _height << endl;
//	}
//};
//
//class Pig : public Animal{
//public:
//	Pig(string name, float age, float weight, float height)
//		:Animal(name, age, weight, height) {}
//
//	void Speak() {
//		cout << _name << "�� �ܲ��մϴ�." << endl;
//	}
//};
//
//class Cow : public Animal{
//public:
//	Cow(string name, float age, float weight, float height)
//		:Animal(name, age, weight, height) {}
//
//	void Speak() {
//		cout << _name << "�� �����մϴ�." << endl;
//	}
//};
//
//class Chicken : public Animal {
//private:
//	bool _isFly;
//
//	void Fly() {
//		cout << _name << "�� ���ϴ�." << endl;
//	}
//public:
//	Chicken(string name, float age, float weight, float height, bool _isFly)
//		:Animal(name, age, weight, height, _isFly) {}
//
//	void Speak() {
//		cout << _name << "�� �������մϴ�." << endl;
//	}
//
//	void Run() {
//		if (_isFly)
//		{
//			Fly();
//		}
//		else
//		{
//			cout << _name << "�� �ݴϴ�" << endl;
//		}
//	}
//
//};
//
//class Dolphin : public Animal {
//private:
//	void Swim() {
//		cout << _name << "�� ���Ĩ�ϴ�." << endl;
//	}
//public:
//	Dolphin(string name, float age, float weight, float height)
//		:Animal(name, age, weight, height) {}
//
//	void Speak() {
//		cout << _name << "�� �����մϴ�." << endl;
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
//		cout << _name << "�� ���մϴ�. " << endl;
//	}
//
//	void Eat() {
//		cout << _name << "�� �Խ��ϴ�." << endl;
//	}
//
//	void Run() {
//		cout << _name << "�� �ݴϴ�. " << endl;
//	}
//
//	void info() {
//		cout << "�̸�: " << _name << endl;
//		cout << "����: " << _age << endl;
//		cout << "������: " << _weight << endl;
//		cout << "Ű: " << _height << endl;
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
//		cout << GetName() << "�� �ܲ��մϴ�." << endl;
//	}
//};
//
//class Cow : public Stock {
//public:
//	Cow(string name, float age, float weight, float height)
//		: Stock(name, age, weight, height) {}
//
//	void Speak() {
//		cout << GetName() << "�� �����մϴ�." << endl;
//	}
//
//};
//
//class Chicken : public Stock {
//private:
//	bool _isFly;
//
//	void Fly() {
//		cout << GetName() << "�� ���ϴ�." << endl;
//	}
//
//public:
//	Chicken(string name, float age, float weight, float height, bool isFly)
//		: Stock(name, age, weight, height), _isFly(isFly) {}
//
//	void Speak() {
//		cout << GetName() << "�� �������մϴ�." << endl;
//	}
//
//
//	void Run() {
//		if (_isFly) {
//			Fly();
//		}
//		else {
//			cout << GetName() << "�� �ݴϴ�." << endl;
//		}
//	}
//
//	void info() {
//		Stock::info();
//		if (_isFly) {
//			cout << "����: ���� ��" << endl;
//		}
//		else {
//			cout << "����: ������ ��" << endl;
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
//		cout << GetName() << "�� �����մϴ�." << endl;
//	}
//};

//int global = 100;  //�ܺκ���, ��������
//int SetScore(int value) {
//	static int score = 0; //���ú���(��������), ��������
//	global = 1000;
//	score += value;
//
//	return score;
//}

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

	//Student* pa= new Student("monster", 10, 3); //������ü
	//pa->info(); //�ּҰ����� Ŭ������ ����� �����Ҷ��� ȭ��ǥ �����ڸ� ����Ѵ�.
	//delete pa; //������ü ��ȯ
	//Student * parray = new Student[5];	//������ü �迭 �⺻ �����ڰ� �ʿ���
	//for (int i = 0; i <5; i++)
	//{
	//	parray[i].init("monster", i, i);	//initŬ������ �Ű������� ���� ����
	//}
	//for (int i = 0; i < 5; i++)
	//{
	//	parray[i].info();	//infoŬ������ ����ִ� ��¹��� ���� ��
	//}
	//delete[] parray;	//������ü �迭 �Ҵ� ����..

	/*Cow cow("��", 2.2f, 200.0f, 1.5f);
	Pig pig("����", 2.5f, 150.0f, 1.3f);
	Chicken flyChicken("���´�", 0.5f, 2.5f, 0.3f, true);
	Chicken notFlyChicken("�����´�", 0.5f, 2.5f, 0.3f, false);
	Horse horse("��", 1.3f, 180.0f, 2.0f);

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
	
	//Cow cow("��", 1.2f, 230.0f, 1.8f);
	//Pig pig("����", 1.2f, 230.0f, 1.8f);
	//Chicken notFlyChicken("������ ��", 1.2f, 230.0f, 1.8f, false);
	//Chicken FlyChicken("���� ��", 1.2f, 230.0f, 1.8f, true);
	//Dolphin dolphin("����", 2.3f, 200.0f, 1.5f);

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



	// �θ��� ����Ÿ Ÿ�Կ� �ڽ��� ����Ÿ Ÿ���� ������ �� �ֽ��ϴ�.
	// ��ĳ����
	cout << "a._value1 = " << a._value1 << endl;
	a = b;
	
	cout << "a._value1 = " << a._value1 << endl;
	
	// �ڽ��� ����Ÿ Ÿ�Կ� �θ��� ����Ÿ Ÿ���� �����ϴ� �� (�⺻������ ������� �ʽ��ϴ�.);
	// �ٿ�ĳ����
	//b = a;
	
	Parent& refa = b;   // ��ĳ����
	
	cout << "refa._value1 = " << refa._value1 << endl;
	
	Child& refaa = (Child&)refa;   // �ٿ� ĳ����
	
	cout << "refaa._value1 = " << refaa._value1 << endl;
	cout << "refaa._value2 = " << refaa._value2 << endl;
	
	
	Parent* pa = &b;   // ��ĳ����
	pa->_value1 = 100;
	cout << "pa->_value1 = " << pa->_value1 << endl;

	
	Child* paa = (Child*)pa;   // �ٿ�ĳ����
	cout << "paa->_value1 = " << paa->_value1 << endl;
	cout << "paa->_value2 = " << paa->_value2 << endl;











	return 0;
}