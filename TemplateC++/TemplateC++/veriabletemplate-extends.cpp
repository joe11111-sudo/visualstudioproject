#include<iostream>
using namespace std;
#include<string>

//类模板与继承
//如果父类是类模板 ，子类必须指定出父类中T的数据类型
//才可以拿到对象

template<class T>
class Base {
	T m;
};

//class son :public Base {	//错误 必须要知道父类中的T类型  才能继承
class Son :public Base<int> {


};

void test() {
	Son s1;
}

//如果想灵活指定父类T类型 子类也需要变类模板
template<class T1,class T2>
class Son2 :public Base<T2> {
public:
		Son2() {
		cout << "T1的是类型为" << typeid(T1).name() << endl;
		cout << "T2的是类型为" << typeid(T2).name() << endl;
	}

	T1 obj;
};

void test2() {
	Son2<int, char>s2;
}

int main() {
	Son2<int, char>S2;
}