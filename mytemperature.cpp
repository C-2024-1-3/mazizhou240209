#include"mytemperature.h"
int main()
{
	double a, c, f;
	cout << "你想输入华氏度还是摄氏度，华氏度扣1，摄氏度扣2" << endl;
	cin >> a;
	if (a == 1)
	{
		cout << "f="<<endl;
		cin >> f;
		c = fahrenheit_to_cels(f);
		cout << c << endl;
	}
	else if (a == 2)
	{
		cout << "c=" << endl;
		cin >> c;
		f = celsius_to_fah(c);
		cout << f << endl;
	}
	else
	{
		cout << "瞎勾八输啥呢" << endl;
	}
	return 0;
}