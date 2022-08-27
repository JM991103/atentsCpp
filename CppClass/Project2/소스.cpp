#include <iostream>

using namespace std;

class Watch {
private:
    string _name;
public:
    Watch(string name)
        : _name(name)
    {
        cout << _name << " Watch ������" << endl;
    }

    ~Watch() {
        cout << _name << " Watch �Ҹ���" << endl;
    }

    void WhatTime() {
        cout << _name << " �ð谡 �۵����Դϴ�." << endl;
    }
};

class SmartPhone {
public:
    SmartPhone() {
        cout << "����Ʈ�� ������" << endl;
    }

    ~SmartPhone() {
        cout << "�������� �Ҹ���" << endl;
    }

    void Say() {
        cout << "����Ʈ���� �۵��մϴ�." << endl;
    }

};

class Heart {
public:
    Heart() {
        cout << "Heart ������" << endl;
    }

    ~Heart() {
        cout << "Heart �Ҹ���" << endl;
    }

    void Say() {
        cout << "������ �ݴϴ�." << endl;
    }

};

class Human {
private:
    Heart _heart;   // Composition : ���Ե� ��ü�� �����ֱ� �����Ҷ�. ���� ����

    SmartPhone& _smartPhone;   // ������ ����, Agreggation: ���Ե� ��ü�� �����ֱ⸦ ���� ���� ������ : ���� ����.

    Watch* _pWatch;   // ������������ Agreggation: ���Ե� ��ü�� �����ֱ⸦ ���� ���� ����.

public:
    Human(SmartPhone& ref)
        : _smartPhone(ref)
    {
        cout << "Human ������" << endl;
    }

    ~Human() {
        cout << "Human �Ҹ���" << endl;
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
        if (_pWatch != NULL) {   // �ð踦 ���� ������ 
            _pWatch->WhatTime();
        }
    }
};


int main() {
    SmartPhone phone;
    Watch redWatch("redWatch");
    Watch blueWatch("blueWatch");


    cout << endl << "���� ����" << endl;
    {
        Human human(phone);
        human.PlayHeartSound();
        human.PlayPhone();

        human.SetWatch(&redWatch);
        human.ShowWatch();

        human.SetWatch(&blueWatch);
        human.ShowWatch();
    }
    cout << "���� ��" << endl << endl;


    return 0;
}