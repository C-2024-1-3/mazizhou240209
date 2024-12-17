#include <iostream>
using namespace std;
void bubbleSort(int* arr, int a)//调用之前的升序函数
{
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a - i; j++)
		{
			if (arr[j] > arr[j + 1] && j + 1 < a)//这里注意要加上限，否则j+1是超小数就完了
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
	int a,*arr;
	cout << "请输入数组的数目" << endl;
	cin >> a;
	arr = new int[a];
	cout << "请输入数组" << endl;
	for (int i = 0; i < a; i++)
	{
		cin >> arr[i];
	}
	bubbleSort(arr, a);
	for (int i = 0; i < a; i++)
	{
		cout << *&arr[i] << " ";//用指针输出
	}
	delete[]arr;//释放内存空间
	return 0;
}