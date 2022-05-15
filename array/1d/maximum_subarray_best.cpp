#include<bits/stdc++.h>

int maxSubarray(std::vector<int>arr) {

	int currSum = 0;
	int maxSum = INT_MIN;
	for(int i = 0; i < arr.size(); i++) {

		currSum += arr[i];
		if(currSum > maxSum) {
			maxSum = currSum;
		}

		if(currSum < 0) {
			currSum = 0;
		}
	}
	return maxSum;
}

int main() {

	std::vector<int>arr = {1, -1, -3, 6, -1, -2, 7, -2, 1};
	std::cout << maxSubarray(arr);

	return 0;
}