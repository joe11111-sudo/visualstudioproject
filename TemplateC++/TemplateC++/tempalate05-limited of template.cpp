#include<iostream>
using namespace std;

//模板局限性
//有些特定数据类型 需要用具体化方式做特殊实现

class Person {
public:
	Person(string name, int age) {
		this->name = name;
		this->age = age;
	}
	string name;
	int age;
};

//对比两个数据是否相等函数
template<class T>
bool myCompare(T& a, T& b) {
	if (a == b) {
		return true;
	}
	else {
		return false;
	}
}


//对特殊类型的通用化
//利用具体化Person版本实现代码，具体化优先调用
template<>bool myCompare(Person& p1, Person& p2) {
	if (p1.name == p2.name && p1.age == p2.age) {
		return true;
	}
	else {
		return false;

	}
}
void test() {
	int a = 19;
	int b = 40;

	bool ret = myCompare(a, b);
	if (ret) {
		cout << "a==b" << endl;
	}
	else {
		cout << "a!=b" << endl;
	}
}

void test2() {
	Person p1("tom", 10);
	Person p2("tom", 10);

	bool ret = myCompare(p1, p2);
		if(ret) {
			cout << "p1==p2" << endl;
		}
		else {
			cout << "p1!=p2" << endl;
	}
}

int main() {

}