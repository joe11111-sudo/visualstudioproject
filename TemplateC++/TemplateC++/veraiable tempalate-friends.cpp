#include<iostream>
using namespace std;
#include<string>

//通过全局函数 打印person信息

//让编译器提前知道Person类存在
template<class T1, class T2>
class Person;

// 类外实现
template<class T1, class T2>
void printPerson2(Person <T1, T2> p) {
	cout << "name" << p.Name << "age" < p.Age << endl;

}

template<class T1,class T2>
class Person {
	//全局函数 类内实现
	friend void printPerson(Person<T1, T2>p) {
		cout << "name" << p.Name << "age" < p.Age << endl;
	}
	//全局函数 类外实现
	//加空模板参数列表
	//如果全局函数类外实现，需要让编译器提前知道这个函数存在
	friend void printPerson2<>(Person <T1, T2> p);

public:
	Person(T1 name, T2 age) {
		this->Name = name;
		this->Age = age;
	}
private:
	T1 Name;
	T2 Age;
};


//全局函数类内实现
void test() {
	Person<string, int>p("tom", 20);
	printPerson(p);
}

void test2() {
	Person<string, int>p("jerry", 20);
	printPerson(p);
}

int main() {
	test();
	test2();
}