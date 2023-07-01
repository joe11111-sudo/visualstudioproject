#include<iostream>
using namespace std;

//普通函数与函数模板区别

//1.普通函数调用可以发生隐式类型转换
//2.函数模板 用自动类型推导 不可发生隐式类型转换
//3.函数模板 用显示指定类型 可以发生隐式类型转换

//普通函数
int myAdd(int a, int b) {
	return a + b;
}


//函数模板
template<typename T>
T myAdd2(T a, T b) {
	return a + b;
}

void test() {
	int a = 10;
	int b = 20;
	char c = 'c';	//a-97  c-99
	cout << myAdd(a, c) << endl;

	//自动类型推导
	//cout << myAdd(a, c) << endl;		//报错

	//显示指定类型
	cout << myAdd2<int>(a, c) << endl;
}


int main() {
	test();
}

