#include <iostream>
using namespace std;
bool is_prime(int num)
{
	int a = 2;
	while (a < num)
	{
		if (num % a == 0)
			return false;
		a++;
	}
	return true;
}
int main()
{
	int a, i=0;
	for (a = 2; i <= 200; a++)
	{
		if (is_prime(a) == 1||a==2)
		{
			cout << a << " ";
			i++;
		}
		if (i % 10 ==0&& is_prime(a) == 1)
			cout << endl;
	}
	return 0;
}
