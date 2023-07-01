#include<iostream>
using namespace std;

//普通函数与函数模板规则
//1.如果函数模板和普通函数都可以调用，有限调用普通函数
//2.可以通过空模板参数列表 强制调用 函数模板
//3.函数模板可以发生函数重载
//4.如果函数模板可以产生更好的匹配 有限调用函数模板

void myPrint(int a, int b)		//可以发生隐式类型转换将char转换成int
{
	cout << "调用普通函数" << endl;

}

template<class T>
void myPrint(T a, T b,T c) {
	cout << "调用函数模板" << endl;
	//cout << "调用函数重载模板" << endl;
}

void test() {
	int a = 10;
	int b = 20;

	myPrint(a, b);	//面对2这种情况，优先调用普通函数

	//铜鼓空模板参数列表，强调用函数模板
	//myPrint<>(a, b);

	//myPrint<>(a, b, 100);

	//如果函数模板产生更好的匹配，优先调用函数模板
	char c1 = 'a';
	char c2 = 'b';

	myPrint(c1, c2);	//调用模板 T 
}


int main() {

}