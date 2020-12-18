//值交换
#include<iostream>
using namespace std;
void swap(int a, int b)
{
	int tem = a;
	a = b;
	b = tem;
	cout << a << endl << b << endl;//可以实现交换，交换的内存空间不一样
}
int main()
{
	int a = 10;
	int b = 20;
	swap(a, b);//值传递(单向传递)
	//cout << a << endl << b << endl;//实参不会变，形参内存释放（形参开辟新的内存空间），并没有达到交换的效果
	system("pause");
	return 0;
}