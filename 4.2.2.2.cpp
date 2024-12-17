#include <iostream>
using namespace std;
int parseHex(const char* const hexString) 
{
	int num = 0;
	int len = strlen(hexString);
	for (int i = 0; i < len; i++)
	{
		if (hexString[i] >= '0' && hexString[i] <= '9')//对于0-9的数值
		{
			num = num + ((int(hexString[i])) - 48) * pow(16, len - 1 - i);//转换成int类型的0-9 根据相应位数乘上16的x-1次方
		}
		else if (hexString[i] >= 'A' && hexString[i] <= 'F')//对于A-F的数值
		{
			num = num + ((int(hexString[i])) - 55) * pow(16, len - 1 - i);//转换为int类型的10-15 根据相应位数乘上16的x-1次方
		}
		else//不正确输入
			cout << "不要乱输" << endl;
	}
	return num;
}
int main()
{
	int t;
	char s[100];
	cout << "输入十六进制数" << endl;
	cin.getline(s, 100);
	t=parseHex(s);
	cout << "十进制数为" << t << endl;
	return 0;
}