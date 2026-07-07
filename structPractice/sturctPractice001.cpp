#include <iostream>
#include <string>
#include <ctime>
using namespace std;

/*学校正在做毕业项目，每名老师带领5个学生，总共有3名老师，需求如下：

设计学生和老师的结构体，其中在老师的结构体中，有老师姓名和一个存放5名学生的数组作为成员。

学生的成员有姓名、考试分数，创建数组存放3名老师，通过函数给每个老师及所带的学生赋值。

最终打印出老师数据以及老师所带的学生数据。 */

//创建学生结构体 包含姓名 成绩
struct Student
{
    string name;
    int score;
};

//创建老师结构体 包含姓名 五名学生
struct Teacher
{
    string name;
    Student sArray[5];
};

//创建赋值函数
void assign (Teacher tArray[]) {
    string nameSeed = "ABCDE";
    for (int i = 0; i < 3; i++) {
        tArray[i].name = "Teacher_";
        tArray[i].name += nameSeed[i];
        for (int j = 0; j < 5; j++) {
            tArray[i].sArray[j].name = "Student_";
            tArray[i].sArray[j].name += nameSeed[j];
            tArray[i].sArray[j].score = rand()%61 + 40;
        }
    }
}

//创建打印函数
void printThis (Teacher tArray[],int len) {
    for (int i = 0; i < len; i++) {
        cout << tArray[i].name << endl;
        for (int j = 0; j < 5; j++) {
            cout << "\t学生姓名:" << tArray[i].sArray[j].name << " 考试分数：" << tArray[i].sArray[j].score << endl;
        }
    }
}

int main () {
    srand((unsigned int)time(NULL));
    Teacher tArray[3];
    assign(tArray);
    int len = sizeof(tArray) / sizeof(tArray[0]);
    printThis(tArray,len);
    system("pause");
    return 0;
}