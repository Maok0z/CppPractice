// 练习案例2：点和圆的关系
// 设计一个圆形类（Circle），和一个点类（Point），计算点和圆的关系。

#include <iostream>
#include <cmath>
using namespace std;

class Circle {
private:
    double radius;
    double c_x;
    double c_y;
public:
    void setRadius(double r) {
        radius = r;
    }

    double getRadius() {
        return radius;
    }

    void setC_x(double x) {
        c_x = x;
    }

    double getC_x() {
        return c_x;
    }

    void setC_y(double y) {
        c_y = y;
    }

    double getC_y() {
        return c_y;
    }
};

class Point {
private:
    double x;
    double y;
public:
    void setX(double x) {
        this->x = x;
    }

    double getX() {
        return x;
    }

    void setY(double y) {
        this->y = y;
    }

    double getY() {
        return y;
    }
};

int main() {
    Circle c;
    c.setRadius(2);
    c.setC_x(0);
    c.setC_y(0);
    Point p;
    p.setX(1.5);
    p.setY(1.5);

    if (sqrt(pow(p.getX() - c.getC_x(),2) + pow(p.getY() - c.getC_y(),2)) > c.getRadius() ) {
        cout << "点在圆外" << endl;
    }
    else if (sqrt(pow(p.getX() - c.getC_x(),2) + pow(p.getY() - c.getC_y(),2)) == c.getRadius() ) {
        cout << "点在圆上" << endl;
    }
    else {
        cout << "点在圆内" << endl;
    }

    system("pause");
    return 0;
}