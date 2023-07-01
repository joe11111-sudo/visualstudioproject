#include<iostream>
using namespace std;
#include<string>

//类模板成员函数类外实现
template<class T1,class T2>
class Person {
public:
	Person(T1 name, T2 age);
	//{
	//	this->Name = name;
	//	this->Age = age;
	//}
	void showPerson();
	//{
	//	cout << "name" << this->Name << "age" << this->Age < endl;
	//}
	T1 Name;
	T2 Age;
};

//类似=普通成员类外实现
//构造函数类外实现
template<class T1,class T2>
Person<T1,T2>::Person(T1 name, T2 age)
{
		this->Name = name;
		this->Age = age;
}

//成员函数类外实现
template<class T1,class T2>
void Person<T1,T2>::showPerson() {
	cout << "name" << this->Name << "age" << this->Age < endl;
}


int main() {
	Person<string, int>p("tom", 12);
	p.showPerson();
}