#include<iostream>
using namespace std;
#include "MyArray.hpp"

//通过模板实现 通用数组

void printArray(MyArray<int> &arr){
	for (int i = 0; i < arr.getSize();i++) {
		cout << arr[i] << endl;
	}
}


void test() {
	//MyArray<int>arr1(5);
	//MyArray<int>arr2(arr1);

	//MyArray<int>arr3(100);
	//arr3 = arr1;

	MyArray<int>arr1(5);
	for (int i = 0; i < 5;i++) {
		//利用尾插法向数组插入数据
		arr1.Push_BAck(i);
	}
	cout << "arr1打印输出为" << endl;
	
	printArray(arr1);
	cout << "arr1容量" << arr1.getCapacity() << endl;
	cout << "arr1容量" << arr1.getSize() << endl;



	//尾删
	MyArray<int>arr2(arr1);
	cout << "arr2打印输出为" << endl;
	printArray(arr2);
	
	//尾删
	arr2.Pop_Back();
	cout << "arr1容量" << arr2.getCapacity() << endl;
	cout << "arr1容量" << arr2.getSize() << endl;
	
}
int main() {
	test();
}