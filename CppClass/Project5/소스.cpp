#include <iostream>
#include <string>

using namespace std;

// ���α׷���
// Ŀ�Ǚ� �������α׷��� ���� �Ƿ� �޾ҽ��ϴ�.

// Cashier, Barista, guest, 

class Drink {
private:
    string _name;

public:
    Drink(string name)
        : _name(name) {}

    string GetName() {
        return _name;
    }

    virtual void MakeADrink() {   // �����Լ�
        cout << "���Ḧ ����ϴ�." << endl;
    }

};


class Coffee : public Drink {
public:
    Coffee()
        : Drink("Coffee") {}

    void MakeADrink() override {
        cout << "Ŀ�Ǹ� ����ϴ�." << endl;
    }
};

class Latte : public Drink {
public:
    Latte()
        : Drink("Latte") {}

    void MakeADrink() override {
        cout << "�󶼸� ����ϴ�." << endl;
    }
};

class Cola : public Drink {
public:
    Cola()
        : Drink("Cola") {}

    void MakeADrink() override {
        cout << "�ݶ� ����ϴ�." << endl;
    }
};

class Barista {
public:
    void MakeADrink(Drink& drink) {
        cout << drink.GetName() << "�� ������ �����մϴ�." << endl;
        drink.MakeADrink();
    }
};

class Cashier {
private:
    Barista& bari;
public:
    Cashier(Barista& ref)
        : bari(ref) {}

    void OrderedDrink(Drink& drink) {
        cout << drink.GetName() << "�ֹ� �� �޽��ϴ�." << endl;
        cout << drink.GetName() << " ���� ������ �����ϴ�." << endl;
        bari.MakeADrink(drink);
    }
};

class Guest {
public:
    void OrderingDrink(Cashier& ref, Drink& drink) { // ������ ����(�Ͻ����� ����)
        cout << drink.GetName() << "�� �ֹ��մϴ�." << endl;
        ref.OrderedDrink(drink);
    }
};



int main() {
    Guest guest;
    Barista bari;
    Cashier cashier(bari);

    Coffee coffee;
    Latte latte;
    Cola cola;

    guest.OrderingDrink(cashier, coffee);
    cout << endl;
    guest.OrderingDrink(cashier, latte);
    cout << endl;
    guest.OrderingDrink(cashier, cola);



    return 0;
}