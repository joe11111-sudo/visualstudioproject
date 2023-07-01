#include<iostream>
using namespace std;

//函数模板

/*两个整形交换函数
void swapInt(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
 }

//交换两个浮点型函数
void swapDouble(double& a, double& b) {
	double temp = a;
	a = b;
	b = temp;
}
*/

//函数模板
template<typename T>	//声明一个模板，告诉编译器后面代码中紧跟着 T ，T是通用数据类型
void mySwap2(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}



void test() {
	int a = 1;
	int b = 19;
/*  swapInt(a, b);
	cout << a << endl;
	cout << b << endl;

	double c = 1.1;
	double d = 2.2;
	swapDouble(c, d);
	cout << a << endl;
	cout << b << endl;
*/

//使用模板实现

	//利用模板交换
	//两种方式使用函数模板
	
	//1.自动类型推导
	//mySwap2(a,b);

	//2.显示指定类型
	mySwap2<int>(a, b);
	cout << a << endl;
	cout << b << endl;

}
int main() {

	test();

	system("pause");
	return 0;
}