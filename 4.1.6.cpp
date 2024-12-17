#include <iostream>
using namespace std;
void count(const char s[], int counts[])
{
	int l_s = strlen(s);
	for (int i = 0; i < l_s; i++)
	{
		int t = int(s[i]);
		if (t >= 65 && t < 91)
			counts[t]++;
		if (t >= 97 && t <123 )
			counts[t - 32]++;
	}
}
int main()
{
	char s[100];
	int counts[100];
	cout <<"Enter a string:" << endl;
	cin.getline(s, 100);
	for (int i = 0; i < 100; i++)
		counts[i] = 0;
	count(s, counts);
	for (int i = 0; i < 100; i++)
	{
		if (counts[i] != 0)
		{
			cout << char(i) << ":" << counts[i] << "times" << endl;
		}
	}
	return 0;
}