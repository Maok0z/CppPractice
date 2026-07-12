// 练习案例1：设计立方体类
//
// 设计立方体类(Cube)
//
// 求出立方体的面积和体积
//
// 分别用全局函数和成员函数判断两个立方体是否相等。

#include <iostream>
using namespace std;
void area (int length,int width,int height) {
    cout  << "全局区area："<< ( ( (length * width) + (length * height) + (width * height) ) * 2 ) << endl;
}

void volume (int length,int width,int height) {
    cout << "全局区volume：" <<  (length * width * height) << endl;
}

class cube {
private:
    int length;
    int width;
    int height;
public:
    void setLength (int length) {
        this->length = length;
    }

    int getLength () {
        return length;
    }

    void setWidth (int width) {
        this->width = width;
    }

    int getWidth () {
        return width;
    }

    void setHeight(int height) {
        this->height = height;
    }

    int getHeight () {
        return height;
    }

    void area () {
        cout << "成员："<< ( ( (length * width) + (length * height) + (width * height) ) * 2 ) << endl;
    }

    void volume () {
        cout << "成员："<< (length * width * height) << endl;
    }
};
int main() {
    cube c1;
    c1.setLength (10);
    c1.setWidth (10);
    c1.setHeight (10);
    int length,width,height;
    cout << "按顺序输入长宽高" << endl;
    cin >> length >> width >> height;
    c1.area();
    c1.volume();
    area(length,width,height);
    volume(length,width,height);

    if (c1.getLength() == length && c1.getWidth() == width && c1.getHeight() == height ) {
        cout << "两个立方体相等" << endl;
    }
    else {
        cout << "两个立方体不等" << endl;
    }
    system("pause");
    return 0;
}