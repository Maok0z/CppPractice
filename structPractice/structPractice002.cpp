/*设计一个英雄的结构体，包括成员姓名、年龄、性别；创建结构体数组，数组中存放5名英雄。

通过冒泡排序的算法，将数组中的英雄按照年龄进行升序排序，最终打印排序后的结果。
五名英雄信息如下：

"刘备", 23, "男";

"关羽", 22, "男";

"张飞", 20, "男";

"赵云", 21, "男";

"貂蝉", 19, "女";
*/

#include <iostream>
#include <string>
using namespace std;

struct hero {
    string name;
    int age;
    string gender;
};

void BubbleSort(hero h[],int len) {
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (h[j].age > h[j + 1].age) {
                hero temp = h[j];
                h[j] = h[j + 1];
                h[j + 1] = temp;
            }
        }
    }
}

void PrintThis(hero h[], int len) {
    for (int i = 0; i < len; i++) {
        cout << h[i].name << " " << h[i].age << " " << h[i].gender << endl;
    }
}
int main() {
    //设计hero结构体
    //录入结构体数组
    hero h[5] =
    {
        {"刘备", 23, "男"},
        {"关羽", 22, "男"},
        {"张飞", 20, "男"},
        {"赵云", 21, "男"},
        {"貂蝉", 19, "女"},
    };

    //测试能否正常输出
    cout << "排序前" << endl;
    for (int i = 0; i < 5; i++) {
        cout << h[i].name << " " << h[i].age << " " << h[i].gender << endl;
    }
    //冒泡排序升序排列
    int len = sizeof(h) / sizeof(h[0]);
    BubbleSort(h,len);
    //打印输出
    cout << "排序后" << endl;
    PrintThis(h,len);
    system("pause");
    return 0;
}