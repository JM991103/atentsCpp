#include <iostream>

using namespace std;

class Watch {
private:
    string _name;
public:
    Watch(string name)
        : _name(name)
    {
        cout << _name << " Watch 생성자" << endl;
    }

    ~Watch() {
        cout << _name << " Watch 소멸자" << endl;
    }

    void WhatTime() {
        cout << _name << " 시계가 작동중입니다." << endl;
    }
};

class SmartPhone {
public:
    SmartPhone() {
        cout << "스마트폰 생성자" << endl;
    }

    ~SmartPhone() {
        cout << "스마프톤 소멸자" << endl;
    }

    void Say() {
        cout << "스마트폰이 작동합니다." << endl;
    }

};

class Heart {
public:
    Heart() {
        cout << "Heart 생성자" << endl;
    }

    ~Heart() {
        cout << "Heart 소멸자" << endl;
    }

    void Say() {
        cout << "심장이 뜁니다." << endl;
    }

};

class Human {
private:
    Heart _heart;   // Composition : 포함된 객체가 생명주기 같이할때. 강한 결합

    SmartPhone& _smartPhone;   // 참조형 변수, Agreggation: 포함된 객체가 생명주기를 같이 하지 않을때 : 약한 결합.

    Watch* _pWatch;   // 포인터형변수 Agreggation: 포함된 객체가 생명주기를 같이 하지 않음.

public:
    Human(SmartPhone& ref)
        : _smartPhone(ref)
    {
        cout << "Human 생성자" << endl;
    }

    ~Human() {
        cout << "Human 소멸자" << endl;
    }

    void SetWatch(Watch* pvalue) {
        _pWatch = pvalue;
    }

    void PlayHeartSound() {
        _heart.Say();
    }

    void PlayPhone() {
        _smartPhone.Say();
    }

    void ShowWatch() {
        if (_pWatch != NULL) {   // 시계를 차고 있으면 
            _pWatch->WhatTime();
        }
    }
};


int main() {
    SmartPhone phone;
    Watch redWatch("redWatch");
    Watch blueWatch("blueWatch");


    cout << endl << "포함 시작" << endl;
    {
        Human human(phone);
        human.PlayHeartSound();
        human.PlayPhone();

        human.SetWatch(&redWatch);
        human.ShowWatch();

        human.SetWatch(&blueWatch);
        human.ShowWatch();
    }
    cout << "포함 끝" << endl << endl;


    return 0;
}