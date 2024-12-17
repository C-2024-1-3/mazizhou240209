#include <iostream>
#define Pi 3.1415926//定义Pi值
using namespace std;
int main()
{
	double r, h, v;
	cout << "输入半径";
	cin >> r;
	cout << "输入高";
	cin >> h;
	v = (r * r * h / 3) * Pi;
	cout << "体积为" << v;
	return 0;
}
