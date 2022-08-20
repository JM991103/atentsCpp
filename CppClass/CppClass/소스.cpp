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

class Pig {
private:
	string _name;
	float _age;
	float _weight;
	float _height;

public:
	Pig(string name, float age, float weight, float height)
		: _name(name), _age(age), _weight(weight), _height(height) {}

	void Speak() {
		cout << _name <<"�� �ܲ��մϴ�." << endl;
	}

	void Eat() {
		cout << _name <<"�� �Խ��ϴ�." << endl;
	}
	
	void Run() {
		cout << _name <<"�� �ݴϴ�.." << endl;
	}
	
	void info() {
		cout << "�̸� : " << _name <<endl;
		cout << "���� : " << _age << endl;
		cout << "������ : " << _weight << endl;
		cout << "Ű : " << _height << endl;
	}

};

class Cow {
private:
	string _name;
	float _age;
	float _weight;
	float _height;

public:
	Cow(string name, float age, float weight, float height)
		: _name(name), _age(age), _weight(weight), _height(height) {}

	void Speak() {
		cout << _name << "�� ���Ӿ��մϴ�." << endl;
	}

	void Eat() {
		cout << _name << "�� �Խ��ϴ�." << endl;
	}

	void Run() {
		cout << _name << "�� �ݴϴ�.." << endl;
	}

	void info() {
		cout << "�̸� : " << _name << endl;
		cout << "���� : " << _age << endl;
		cout << "������ : " << _weight << endl;
		cout << "Ű : " << _height << endl;
	}

};

class Chicken {
private:
	string _name;
	float _age;
	float _weight;
	float _height;
	bool _isFly;

	void Fly() {
		cout << _name << "�� ���ϴ�." << endl;
	}

public:
	Chicken(string name, float age, float weight, float height, bool isFly)
		: _name(name), _age(age), _weight(weight), _height(height), _isFly(isFly) {}

	void Speak() {
		cout << _name << "�� �������մϴ�.." << endl;
	}

	void Eat() {
		cout << _name << "�� �Խ��ϴ�." << endl;
	}

	void Run() {
		if (_isFly)
		{
			Fly();
		}
		else
		{
			cout << _name << "�� �ݴϴ�." << endl;
		}
	}

	void info() {
		cout << "�̸� : " << _name << endl;
		cout << "���� : " << _age << endl;
		cout << "������ : " << _weight << endl;
		cout << "Ű : " << _height << endl;

		if (_isFly)
		{
			cout << "���� : ���� ��" << endl;
		}
		else {
			cout << "���� : ������ ��" << endl;
		}
	}
};




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

	Cow cow("��", 2.2f, 200.0f, 1.5f);
	Pig pig("����", 2.5f, 150.0f, 1.3f);
	Chicken flyChicken("���´�", 0.5f, 2.5f, 0.3f, true);
	Chicken notFlyChicken("�����´�", 0.5f, 2.5f, 0.3f, false);

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




	return 0;
}