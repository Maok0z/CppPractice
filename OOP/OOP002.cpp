//设计人类结构体，包含姓名，年龄和偶像
//其中姓名和年龄可读可写，偶像只可写，并且年龄范围限制为0-150

#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;
    string idol;
public:
    void setName (string name) {
        this->name = name;
    }

    string getName () {
        return name;
    }

    void setAge (int age) {
        if (age < 0 || age > 150) {
            cout << "输入有误，请重新输入！" << endl;
            return;
        }
        this->age = age;
    }

    int getAge () {
        return age;
    }

    void setIdol (string idol) {
        this->idol = idol;
    }
};

int main() {
    Person p;
    p.setName("张三");
    p.setAge(70);
    p.setIdol("张雪峰");
    cout << p.getName() << "\t" << p.getAge() << endl;
    system("pause");
    return 0;
}