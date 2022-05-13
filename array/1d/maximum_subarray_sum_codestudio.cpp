#include<bits/stdc++.h>


int maxSubArray(std::vector<int>arr) {

	std::vector<int>arrSum(arr.size(), 0);
	arrSum[0] = arr[0];
	int currSum = 0;
	int maxSubSumArray = 0;

	for(int i = 1; i < arr.size(); i++) {
		arrSum[i] = arrSum[i - 1] + arr[i];
	}

	for(int i = 0; i < arr.size(); i++) {
		for(int j = i; j < arr.size(); j++) {
			currSum = 0;
			currSum = arrSum[j] - arrSum[i - 1];
			maxSubSumArray = std::max(maxSubSumArray, currSum);
		}
	}
	return maxSubSumArray;
}

int main() {

	std::vector<int>arr = {1, 2, 7, -4, 3, 2, -10, 9, 1};
	std::cout << maxSubArray(arr) << '\n';

	return 0;
}