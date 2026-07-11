#include <iostream>
using namespace std;

class Student {
    public:
    string name;
    string number;

    void printStudent () {
        cout << name <<"\t"<< number << endl;
    }
};
int main() {
    Student stu;
    stu.name = "John";
    stu.number = "1145141919810";
    stu.printStudent();
    system("pause");
    return 0;
}