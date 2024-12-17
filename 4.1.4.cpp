#include <iostream>
using namespace std;
void bubbleSort(int* arr,int a)//调用之前的升序函数
{
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a - i; j++)
		{
			if (arr[j] > arr[j + 1]&&j+1<a)
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
	int a, b;
	cout << "请输入第一个数组的数目" << endl;
	cin >> a;
	cout << "请输入第二个数组的数目" << endl;
	cin >> b;
	int* arr1,*arr2,*arr3;
	arr1 = new int[a];
	arr2 = new int[b];
	cout << "输入第一个数组" << endl;
	for (int i = 0; i < a; i++)
	{
		cin >> arr1[i];
	}
	cout << "输入第二个数组" << endl;
	for (int i = 0; i < b; i++)
	{
		cin >> arr2[i];
	}
	int c = a + b;
	arr3 = new int[c];
	for (int i = 0; i < a; i++)
	{
		arr3[i] = arr1[i];
	}
	for (int i = a; i < c; i++)
	{
		arr3[i] = arr2[i-a];
	}
	bubbleSort(arr3, c);
	for (int i = 0; i < c; i++)
	{
		cout << arr3[i] << " ";
	}
	return 0;
}
