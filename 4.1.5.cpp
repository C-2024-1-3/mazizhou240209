#include <iostream>
using namespace std;
int indexOf(const char s1[], const char s2[])
{
	int len_s1 = strlen(s1);
	int len_s2 = strlen(s2);
	int equal = 0;//计数=0
	for (int i = 0; i < len_s2; i++)
	{
		equal = 0;//计数=0
		if (s1[0] == s2[i] && len_s1 <= (len_s2 - i + 1))//如果子串的第一项与母串的某一项相等 且子串长度小于母串剩余长度
		{
			equal++;//计数+1
			for (int j = 1; j < len_s1; j++)
			{
				i++;//i+1
				if (s1[j] == s2[i])
				{
					equal++;
				}
				else
				{
					break;
				}
			}
			if (equal == len_s1)//长度与各个字符都相等
			{
				return (i - len_s1 + 1);
			}
		}
	}
	return -1;
}
int main()
{
	char s1[100], s2[100];
	cout << "Enter the first string: " << endl;
	cin.getline(s1, 100);
	cout << "Enter the second string:  " << endl;
	cin.getline(s2, 100);
	cout<<indexOf(s1, s2)<<endl;
	return 0;
}