#include<iostream>
using namespace std;
#include<string>


//类模板	与函数模板区别
//只有在类模板才能用 默认参数
template<class Nametype,class AgeType=int>
class Person {
public:
	Person(NameType name,AgeType age) {
		this->Name = name;
		this->Age = age;
	}
	void ShowPerson() {
		cout << "name" << this->Name << "Age" << this->Age << endl;
	}
	Nametype Name;
	Agetype Age;

};


//1.类模板没有自动类型推导
void test() {
	//Person p("wukong",18);	//错误
	Person<string, int> p1("wukong", 18);
	p1.ShowPerson();
}

//2.类模板在末班参数列表中可以有默认参数
void test2() {
	Person<string>p2("piggy", 222);
	p2.ShowPerson();
}

int main() {
	test();
	test2();

	system("pause");
}