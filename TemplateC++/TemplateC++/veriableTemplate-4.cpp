#include<iostream>
using namespace std;
#include<string>

//类模板对象做函数
template<class T1,class T2>
class Person {
public:
	Person(T1 name, T2 age) {
		this->Name = name;
		this->Age = age;
	}
	void showPerson() {
		cout << "name" << this->Name << "age" << this->Age << endl;
	}
	
	T1 Name;
	T2 Age;
};
//1.指定传入类型 最常用
void Print(Person<string, int> &p) {
	p.showPerson();
}

void test() {
	Person<string, int>p("wukng", 100);
	Print(p);
}




//2.参数模板化
template<class T1, class T2>
void Print2(Person<T1,T2>& p) {
	p.showPerson();
	cout << "t1的类型" << typeid(T1).name() << endl;
	cout << "t2的类型" << typeid(T2).name() << endl;
}

void test2() {
	Person<string, int>p("piggy", 1100);
	Print2(p);
}




//3.整个类模板化
template<class T>
void Print3(T& p) {
	p.showPerson();
	cout << "T数据类型" << typeid(T).name() << endl;
}

void test3() {
	Person<string, int>p("tang", 30);
	Print3(p);
}
