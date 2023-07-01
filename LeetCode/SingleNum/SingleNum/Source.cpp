#include <iostream>
#include <stdio.h>S
using namespace std;

int singleNum(int* nums, int numsize) {
	for (int i = 0; i < numsize; i++) {
		printf("%d\n", nums[i]);
		
		int count = 0;
		for (int j = 0; j < numsize; j++) {
			if (nums[j] == nums[i]) {	
				count++;		
			}
		}
		if (count == 1) {
			return nums[i];	//num=1
		}
	}
	return 0;
}


int singleNumber(int* nums,int numsize){
	//n= num[0] ^ num[1] ^num[2]	bitwise XOR
	//sizeof(int) == 4 bytes 00000000 00000000 00000000 00000000
	//1 bytes =8bits
	//1bit =[0] or [1]

	int n = nums[0];
	for (int i = 1; i < numsize; i++) {
		n ^= nums[i];	// n ^ num[i];
	}
	return n;
}

int main() {
	int input[3] = { 2,2,1 };
	
	printf("%d\n", singleNumber(input, 3));
	return 0;
}