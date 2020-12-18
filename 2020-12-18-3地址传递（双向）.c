//地址传递（双向）
#include<iostream>
using namespace std;
void swap(int* a, int* b)
{
	int tem = *a;
	*a = *b;
	*b = tem;//和实参的内存空间一样
}
int main()
{
	int a = 10;
	int b = 20;
	swap(a, b);//地址传递(双向传递)
	cout << a << endl << b << endl;
	system("pause");
	return 0;
}