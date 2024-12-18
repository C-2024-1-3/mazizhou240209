#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private://应实验要求，将数据成员改为私有的
	int hour;
	int minute;
	int sec;
public://因为数据成员为私有，应定义成员函数将其在类内改变
	void cintime()//输入要在类内
	{
		cin >> hour;      //输入设定的时间 
		cin >> minute;
		cin >> sec;
	}

	void showtime()//数据成员的展示也应调用成员函数
	{
		cout << hour << ":" << minute << ":" << sec << endl;
	}
};
int main()
{
	Time h1;
	h1.cintime();
	h1.showtime();
	return 0;
}
