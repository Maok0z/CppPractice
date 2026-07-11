#include <iostream>
using namespace std;
void swap01(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "swap01 a=" << a << endl;
    cout << "swap01 b=" << b << endl;
}

void swap02 (int * a, int * b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << "swap02 a=" << *a << endl;
    cout << "swap02 b=" << *b << endl;
}

void swap03 (int &a,int &b) {
    int temp =a;
    a = b;
    b = temp;
    cout << "swap03 a=" << a << endl;
    cout << "swap03 b=" << b << endl;
}
int main() {
    int a = 10;
    int b = 20;
    //swap01(a,b);
    //swap02(&a,&b);
    swap03(a,b);
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    system("pause");
    return 0;
}