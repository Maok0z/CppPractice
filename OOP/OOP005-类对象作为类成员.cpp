#include <iostream>
#include <string>
using namespace std;
//类对象作为类成员，设计一个手机类（品牌），设计一个人类（人名，手机品牌），人类包含手机类对象

class Phone {
public:
    Phone (string name) {
        this->name = name;
    }

    string getPhoneName () {
        return name;
    }
private:
    string name;
};

class Person {
public:
    Person (string name, string phoneName): name(name),Phone_p(phoneName) {

    }
    string getName () {
        return name;
    }

    string getPhone () {
        return Phone_p.getPhoneName();
    }
private:
    string name;
    Phone Phone_p;  //手机类对象
};

int main () {
    Person Person_p ("张三","IPhone 17 Pro Max");

    cout << Person_p.getName()  << "\t" << Person_p.getPhone() << endl;
    system("pause");
    return 0;
}