#include<iostream>
using namespace std;

/*
	input: nums[0,3,0,12,1]
	output: nums[3,12,1,0,0]
*/


void moveZeroes(int* nums, int numsize) {
	//nums:[0,1,0,3,12], numsize:5
	//nums:[1,0,3,12,0], numsize:5
	//nums:[1,3,12,0,0], numsize:5
	
	
	
	for(int k =1;k<=numsize;k++){		
		for (int i = 0; i < numsize; i++) {
			if (nums[i] == 0 && nums[i + 1] != 0) 
			{
				int temp = nums[i];
				nums[i] = nums[i + 1];
				nums[i + 1] = temp;
			}
		}
	}	
	return;
}


/*----------------------------------------------------------*/

void Movezeroes(int* num, int numsize) {
	//int ans[numsize];	//c99:VLA(变数长度阵列


	//nums[0,1,0,3,12]
	int j = 0;
	for (int i = 0; i < numsize; i++) {
		if (num[i] != 0) {
			num[j] = num[i];	//j<=i
			j++;
		}
	}

	while (j < numsize) {
		num[j] = 0;
		j++;
	}

	/*for (int i = 0; i < numsize; i++) {
		num[i] = ans[i];
	}*/

	return;
}
