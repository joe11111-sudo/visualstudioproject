#include<iostream>
using namespace std;
#include"person.hpp"

//第一种解决方式，直接包含源文件
// 类模板的分文件问题以及解决

//第二种解决方试 将h和cpp中内容写到一起，后缀名写hpp文件

//template<class T1,class T2>
//class Person {
//public:
//	Person(T1 name, T2 age);
//
//	void showPerson();
//
//	T1 Name;
//	T2 Age;
//};

//template<class T1,class T2>
//Person<T1,T2>::Person(T1 name, T2 age) {
//	this->Name = name;
//	this->Age = age;
//}
//template<class T1,class T2>
//void Person<T1, T2>::showPerson() {
//	cout << "name" << this->Name << "agge" << this->age << endl;
//}

void test() {
	Person<string, int>p("tmo", 19);
	p.showPerson();

	
}


int main() {
	test();
}