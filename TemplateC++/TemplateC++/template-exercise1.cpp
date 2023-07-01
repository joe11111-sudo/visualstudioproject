#include<iostream>
using namespace std;


//实现通用 对数组进行排序的函数
//规则 从大到小
//算大 选择排序
//测试 char数组，int 数组

//交换函数模板
 template<class T>
 void myswap(T&a,T&b) {
	 T temp = a;
	 a = b;
	 b = temp;
 }


//排序算法
template<class T>
void mySort(T arr[],int len) {
	for (int i = 0; i < len; i++) {
		int max = i		//认定最大值下标
			for (int j = i + 1; j < len;j++) {
				//认定最大 比 遍历数值小 说明j下标更大
				if (arr[max] < arr[j]) {
					max = j;	//新的最大值
				}
			}if (max != i) {
				//交换max和i
				myswap(arr[max], arr[i]);
			}
	}
}

//提供打印数组模板
template<class T>
void printArray(Tarr[], int len) {
	for (int i = 0; i < len; i++) {
		cout<<arr[i]<<" "
	}
	cout << endl;
}


void test() {
	//测试char数组
	char charArr[] = { "badcfe" };
	int num = sizeof(charArr) / sizeof(char);
	mySort(charArr,num);
	printArray(charArr,num);
}

void test2() {
	//测试int数组
	int int Arr[] = { 7,5,1,3,9,2,4,6,8 };
	int num = sizeof(intArr) / sizeof(int);
	mySort(intArr, num);
	printArray(intArr, num);
}

int main() {

	test();

}