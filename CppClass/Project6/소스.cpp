#include <iostream>

using namespace std;

class A {
public:
    void PrintMessage() {   //�Ϲ� �Լ�
        cout << "A::PrintMessage" << endl;
    }

    virtual void PrintInfo() {  //���� �Լ�
        cout << "A::PrintInfo" << endl;
    }

    virtual void PrintInfo2() { //���� �Լ�
        cout << "A::PrintInfo2" << endl;
    }

};

class B : public A {
public:
    void PrintMessage() {   //�Ϲ��Լ� : ���Ӱ� ���� �Լ�
        cout << "B::PrintMessage" << endl;
    }

    virtual void PrintInfo() override { //�����Լ� : �θ��� �����Լ��� �ڽ��� ������
        cout << "B::PrintInfo" << endl;
    }
};

class C : public A {
public:
    void PrintMessage() {   //�Ϲ� �Լ�
        cout << "C::PrintMessage" << endl;
    }


    virtual void PrintInfo2() override {    //�����Լ�
        cout << "C::PrintInfo2" << endl;
    }

};

void ExcutePrintMessage(A& ref) {
    ref.PrintMessage();
}

void ExcutePrintInfo(A& ref) {
    ref.PrintInfo();
}

void ExcutePrintInfo2(A& ref) {
    ref.PrintInfo2();
}

int main() {
    A a;
    B b;
    C c;

    cout << "�Ϲ��Լ�" << endl;
    ExcutePrintMessage(a);
    ExcutePrintMessage(b);
    ExcutePrintMessage(c);

    cout << endl;
    cout << "�����Լ�" << endl;
    ExcutePrintInfo(a);
    ExcutePrintInfo(b);
    ExcutePrintInfo(c);



    return 0;
}