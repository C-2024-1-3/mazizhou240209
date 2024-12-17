#include <iostream>
using namespace std;
void change(bool* arr, int a)
{
	for (int i = a; i <= 99; i = i + a + 2)//注意数组的编号小一位，如2号柜子实际为arr[1]，此时i=1,而间隔为3
	{
		arr[i] = (!arr[i]);
	}
}
int main()
{
	bool arr1[100];
	for (int i = 0; i < 100; i++)
	{
		arr1[i] = true;
	}
	for (int i = 1; i <= 99; i++)
	{
		change(arr1, i);
	}
	cout << "仍然打开的柜子是" << endl;
	for (int i = 0; i < 100; i++)
	{
		if (arr1[i] == true)
			cout << (i + 1)<<" ";
	}
	return 0;
}