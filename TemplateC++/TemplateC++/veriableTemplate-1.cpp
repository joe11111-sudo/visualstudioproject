#include<iostream>
using namespace std;
#include<string>

//类模板
template<class NameType,class AgeType>
class Person {
public:
	Person(NameType name, AgeType age) {
		this->Name = name;
		this->Age = age;
	}
	void showPerson() {
		cout << "name" << this->Name << "age=" << this->Age << endl;
	}

	NameType Name;
	AgeType Age;

};

void test() {

	Person<string, int>p1("wukong", 999);
	p1.showPerson();
}

int main() {
	test();
}