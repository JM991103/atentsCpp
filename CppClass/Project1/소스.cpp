#include <iostream>
#include <string>

using namespace std;
// ����.

class Point {
private:
    int _x, _y;

public:
    Point(int x, int y)
        : _x(x), _y(y) {}

    int GetX() {
        return _x;
    }

    int GetY() {
        return _y;
    }

    void info() {
        cout << "x: " << _x << endl;
        cout << "y: " << _y << endl << endl;
    }
};

class Line {
private:
    Point _pt1, _pt2;

public:
    Line(int x1, int y1, int x2, int y2)
        : _pt1(x1, y1), _pt2(x2, y2) {}

    Line(Point pt1, Point pt2)
        : _pt1(pt1), _pt2(pt2) {}

    float GetLength() {
        // �缱�� ������
        return sqrt(pow(_pt2.GetX() - _pt1.GetX(), 2) + pow(_pt2.GetY() - _pt1.GetY(), 2));
    }
};

// �ﰢ�� Ŭ������ ����� �ﰢ���� ������ ���ϼ���.. (���ﰢ��, �����ﰢ��)
// �簢�� Ŭ������ ����� �簢���� ������ ���ϼ���.. (���簢��, �����簢��)
// �� Ŭ������ ����� ���� ������ ���ϼ���...

class Rectangle {
private:
    Point _topLeftPt, _bottomRightPt;

public:
    Rectangle(Point topLeftPt, Point bottomRightPt)
        : _topLeftPt(topLeftPt), _bottomRightPt(bottomRightPt) {}

    Rectangle(int topx, int topy, int bottomx, int bottomy)
        : _topLeftPt(topx, topy), _bottomRightPt(bottomx, bottomy) {}

    int GetArea() {
        int width = _bottomRightPt.GetX() - _topLeftPt.GetX();
        int height = _bottomRightPt.GetY() - _topLeftPt.GetY();

        return width * height;
    }

};

class Triangle {
private:
    Point _topPt, _leftPt, _rightPt;

public:
    Triangle(Point topPt, Point leftPt, Point rightPt)
        : _topPt(topPt), _leftPt(leftPt), _rightPt(rightPt) {}

    Triangle(int topx, int topy, int leftx, int lefty, int rightx, int righty)
        : _topPt(topx, topy), _leftPt(leftx, lefty), _rightPt(rightx, righty) {}

    float GetArea() {
        int base = _rightPt.GetX() - _leftPt.GetX();
        int height = _rightPt.GetY() - _topPt.GetY();

        return base * height / 2;
    }

};

class Circle {
private:
    Point _centerPt;
    int _radius;
    const float PI = 3.14f;

public:
    Circle(Point centerPt, int radius)
        : _centerPt(centerPt), _radius(radius) {}


    float GetArea() {
        return PI * _radius * _radius;
    }
};


int main() {
    Line line(0, 0, 10, 10);
    cout << "line ���̴� " << line.GetLength() << endl;

    Rectangle rect(0, 0, 10, 10);
    cout << "rect area = " << rect.GetArea() << endl;

    Triangle tri(0, 0, 0, 5, 5, 5);
    cout << "tri area = " << tri.GetArea() << endl;

    Circle cir(Point(10, 10), 5);
    cout << "cir area = " << cir.GetArea() << endl;


    return 0;
}