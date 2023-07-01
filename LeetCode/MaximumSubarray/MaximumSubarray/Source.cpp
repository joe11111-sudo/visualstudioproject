#include <iostream>
using namespace std;
/*
	max subarray 最大子数列
	input:[-2,1,-3,4,-1,2,1,-5,4]
	output:6
	explanation;[4,-1,2,1] has the largest sum =6

*/

int maxSubArray(int* nums, int numsize) {
		int max;
		/*
		int i;	//选择一个起点	i~(numsize -1)
		int j;	//选择终点		j~(numsize -1)
		*/
		for (int i = 0; i < numsize; i++) {
			for (int j = i; j < numsize; j++) {
				//i:0 , j:0
				//i:0 , j:1
				//i:0 , j:1
				//i:0 , j:3
				//i:0 , j:4
				//i:0 , j:5
				int sum = 0;	//计算从起点到终点的节点的和
				for (int k = i; k <= j; k++) {	//k=i,3,4,5,j
					sum += nums[k];
			}
				//如果比原本的最大值大，换掉
				if (sum > max) {
					max = sum;
				}
				printf("%d %d  : %2d  (%d)\n", i, j, sum, max);
		}
	}
		return max;
}