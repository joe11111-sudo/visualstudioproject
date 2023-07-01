#pragma once
#include<iostream>
using namespace std;

#include<string>
template<class T1, class T2>
class Person {
public:
	Person(T1 name, T2 age);

	void showPerson();

	T1 Name;
	T2 Age;
};

	
#include<string>
template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age) {
	this->Name = name;
	this->Age = age;
}
template<class T1, class T2>
void Person<T1, T2>::showPerson() {
	cout << "name" << this->Name << "agge" << this->age << endl;
}