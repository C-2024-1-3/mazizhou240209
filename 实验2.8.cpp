#include <iostream>
using namespace std;
int main()
{
	int a, b,c;
	cout << "请输入a";
	cin >> a;
	if (a < 0)
	{
		cout << "请输入正确的a值";
		cin >> a;
	}
	b = a;
	for (c=99999; c-b > 0.00001;)
	{
		c = b;
		b = (b + a / b) / 2;
	}
	cout << "平方根为" << b;
	return 0;
}