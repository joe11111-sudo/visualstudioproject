#include<iostream>
using namespace std;

//函数模板注意事项

template<typename T>	//typename 可以替换成class
void swap(T& a, T* b) {
	T temp = a;
	a = b;
	b = temp;
}
//1.自动类型推导，必须推导出一直的数据类型T菜而已使用
void test() {
	int a = 10;
	int b = 20;
	char c = 'c';

	//swap(a, c);	//错误  数据类型不一致
	swap(a, b);
	cout << a << endl;
	cout << b << endl;
}
//2.模板必须确定出T数据类型，才可以使用
template<class T>
void func() {
	cout << "func activate" << endl;
}

void test2() {
	func<int>();	//必须定义
}


int main() {
	test2();	

}
