#include <iostream>
using namespace std;
int yesterday(int a)
{
	int b = (a + 1) * 2;
	return b;
}
int main()
{
	int a = 1;
	for (int i = 1; i <= 10; i++)
	{
		a = yesterday(a);
	}
	cout << "原有桃子" << a << endl;
	return 0;
}
