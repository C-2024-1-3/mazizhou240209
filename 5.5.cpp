#include <iostream>
using namespace std;
class point
{
private:
	int x, y;
public:
	point()//构造函数，将x、y坐标值初始化为（60,80）
	{
		x = 60;
		y = 80;
	}
	void setPoint(int i, int j)//公有成员函数void setPoint(int i, int j)将坐标值修改为(60+i,80+j)
	{
		x += i;
		y += j;
	}
	void display()//公有成员函数display()输出修改后的坐标值
	{
		cout << "(" << x << "," << y << ")";
	}
};
int main()
{
	int i, j;
	point p1;
	cout << "请输入i，j" << endl;
	cin >> i >> j;
	p1.setPoint(i, j);
	p1.display();
	return 0;
}