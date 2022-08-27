#include <iostream>

using namespace std;

class A {
public:
    void PrintMessage() {   //일반 함수
        cout << "A::PrintMessage" << endl;
    }

    virtual void PrintInfo() {  //가상 함수
        cout << "A::PrintInfo" << endl;
    }

    virtual void PrintInfo2() { //가상 함수
        cout << "A::PrintInfo2" << endl;
    }

};

class B : public A {
public:
    void PrintMessage() {   //일반함수 : 새롭게 만든 함수
        cout << "B::PrintMessage" << endl;
    }

    virtual void PrintInfo() override { //가상함수 : 부모의 가상함수를 자식이 재정의
        cout << "B::PrintInfo" << endl;
    }
};

class C : public A {
public:
    void PrintMessage() {   //일반 함수
        cout << "C::PrintMessage" << endl;
    }


    virtual void PrintInfo2() override {    //가상함수
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

    cout << "일반함수" << endl;
    ExcutePrintMessage(a);
    ExcutePrintMessage(b);
    ExcutePrintMessage(c);

    cout << endl;
    cout << "가상함수" << endl;
    ExcutePrintInfo(a);
    ExcutePrintInfo(b);
    ExcutePrintInfo(c);



    return 0;
}