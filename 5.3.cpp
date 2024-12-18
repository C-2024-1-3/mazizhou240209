#include <iostream>
using namespace std;
class cuboid//定义长方体类
{
private:
	int length, width, height;//定义长宽高
public:
	void set_cin()
	{
		cout << "输入长宽高：";
		cin>>length ;
		cin>>width ;
		cin>>height ;
	}
	void V()
	{
		int v = length * width * height;//计算体积
		cout << "v=" << v << endl;
	}
};
int main()
{
	cuboid c1, c2, c3;
	c1.set_cin();
	c2.set_cin();
	c3.set_cin();
	c1.V();
	c2.V();
	c3.V();
	return 0;
}
