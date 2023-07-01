#include<iostream>
using namespace std;
#include<string>

//类模板中成员函数创建时机
//类模板成员函数在调用时才创建

class Person1 {
public:
	void ShowPerson1() {
		cout << "Person1" << endl;
	}
};

class Person2 {
public:
	void ShowPerson2() {
		cout << "Person2" << endl;
	}
};

template<class T>
class Myclass {
public:
	T obj;

	//类模板中成员函数
	void func1() {
		obj.showPerson1();
	}
	void func2() {
		obj.showPerson2();
	}
};

//类模板只有被调用的时候才会被编译器创建出来，如果没有就不会被创建
void test() {
	Myclass<Person1>m;
	m.func1();
	//m.func2();
}



int main() {
	test();
}