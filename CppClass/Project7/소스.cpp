#include <iostream>

using namespace std;

class Complex {
private:
    int _real;
    int _imaginary;

public:
    Complex(int real, int imaginary)
        : _real(real), _imaginary(imaginary) {}

    Complex operator+(Complex& ref) {
        Complex temp(_real + ref._real, _imaginary + ref._imaginary);

        return temp;
    }

    void info() {
        cout << _real << showpos << _imaginary << "i" << endl;
        cout << noshowpos;
    }

};

int main() {
    Complex a(10, 10);
    Complex b(20, 20);
    Complex c(0, 0);

    c = a + b;
    c = a.operator+(b);

    a.info();
    b.info();

    c.info();

    return 0;
}