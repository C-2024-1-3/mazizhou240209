#include <iostream>
using namespace std;
class student
{
    friend void max(student* a, student arr[]);//定义友元函数以解决调用问题
private:
    int id, score;//类外难以调用，考虑友元函数
public:
    student()
    {
        id = 0;
        score = 0;
    }
    void set()
    {
        cout << "学号及分数:";
        cin >> id;
        cin >> score;
    }
    void show()
    {
        cout << id << "号有最高分" << score;
    }
};
void max(student* a, student arr[])//用指向类的指针做参数
{
    a = &arr[0];//初始化指针
    for (int i = 1; i < 5; i++)
    {
        if (arr[i].score > a->score)
            a = &arr[i];
    }
    a->show();
}
int main()
{
    student stud[5];//定义学生类数组
    for (int i = 0; i < 5; i++)
    {
        stud[i].set();
        cout << endl;
    }
    student* a=nullptr;
    max(a, stud);//参数不传数组，首地址即可
    return 0;
}