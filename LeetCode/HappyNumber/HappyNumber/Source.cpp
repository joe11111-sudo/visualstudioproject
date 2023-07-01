#include<iostream>
#include<stdio.h>
using namespace std;
/*	Examples

	Input:20
	output:true
	Explanation:
	2*2 + 0*0 =>4
	4*4 + 0*0 =>16
	1*1 + 6*6 =>37
	3*3 + 7*7 =>58
	5*5 + 8*8 =>89
	8*8 +9*9 =>145
	1*1 +4*4 +5*5 =>42
	4*4 + 2*2 =>20	false
*/


bool isHappy(int n) {
	/*
	n = 54321;
	d1 = n		  % 10;		//1
	d2 = n /10    % 10;		//2
	d3 = n /100   % 10;		//3
	d4 = n /1000  % 10;		//4
	d5 = n /10000 % 10;		//5
	d6 = n /100000  % 10;		//0
	d7 = n /1000000 % 10;		//0
	d7 = n /10000000 % 10;		//0
	d7 = n /100000000 % 10;		//0
	d7 = n /1000000000 % 10;	//0


	func: d = n / m % 10
	*/
	int r = 0;
	int m = 1;
	for (int m = 1000000000; m >= 1; m/=10) {
		int d = n / m % 10; //d:5,4,3,2,1,0,0,0,0,0
		r += d * d;
	}
	printf("%d\n", r);
	return false;
}
/*-----------------------------------------------------------*/
bool IsHappy(int n) {
	int n = 12345;
	int r = 0;

	while (n != 0) {
		int d = n % 10;
		n /= 10;
		r += d * d;
	}
	printf("%d\n", r);
	return false;	//s=0

}

/*--------------------------------------------------------*/
int next_n(int n) {
	int r = 0;
	while (n != 0) {
		int d = n % 10;
		n /= 10;
		r += d * d;
	}return r;
}


bool contains(int* history, int size, int n) {	//检测n是否在history出现过
	for (int i = 0; i < size; i++) {
		if (history[i] == n) {
			return true;
		}
	}
	return false;
}

bool ISHAPPY(int n) {
	int history[10000];
	int size = 0;
	
	//history：【19，82,68,100,1,?,?,..]
	//size:5

	while (!contains(history, size, n)) {
		history[size] = n;
		size++;
		n = next_n(n);	//n: 1
	}
	return n == 1;
}



