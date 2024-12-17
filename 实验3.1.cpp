#include <iostream>
using namespace std;
int gys(int a,int b)//定义公因数函数
{
	int c = a ? b : a < b;
	while (c > 0)
	{
		if (a % c == 0 && b % c == 0)
			break;
		c--;
	}
	return c;
}
int gbs(int a, int b)//定义公倍数函数
{
	int c = a ? b : a > b;
	while (c > 0)
	{
		if (c % a == 0 && c % b == 0)
			break;
		c++;
	}
	return c;
}
int main()
{
	int a, b;
	cout << "输入两个数" << endl;
	cin >> a >> b;
	cout << "最大公因数" << gys(a, b) <<endl<< "最小公倍数" << gbs(a, b) << endl;
	return 0;
}