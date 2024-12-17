#include <iostream>
using namespace std;
int main()
{
	int a[10];
	int temp[10];
	int b=0;
	int t;
	cout << "输入十个数" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> temp[i];
		t = 0;
		for (int j = 0; j < i; j++)
		{
			if (temp[i] == temp[j])
				t++;
		}
		if (t == 0)
			{
				a[b] = temp[i];
				b++;
			}
	}
	cout << "还剩下" << endl;
	for (int i = 0; i < b; i++)
	{
		cout<< a[i]<<" ";
	}
	return 0;
}