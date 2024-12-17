#include <iostream>
using namespace std;
void bubbleSort(int* arr)
{
	for (int i = 0; i < 9; i++)//比较轮数:比较一次 可以比出 一个最大值 要将10个数排序 仅需比出9次(10-1)最大值 即可确定排序
	{
		for (int j = 0; j < 9 - i; j++)//比较的数字:第一次要10个数前后比较 比较九回 选出最大值 第二次要选出次大值，以此类推
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
int main()
{
	int arr[10];
	cout << "输入10个数"<<endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}
	bubbleSort(arr);
	cout << "换序后为" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i]<<" ";
	}
	return 0;
}