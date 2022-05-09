#include<bits/stdc++.h>

// int findMaximumSubArray(std::vector<int>arr) {

// 	int maxSum = 0;
// 	for(int i = 0; i < arr.size(); i++) {
// 		for(int j = i; j < arr.size() - 1; j++) {
// 			int currSum = 0;
// 			for(int k = i; k <= j; k++) {
// 				currSum += arr[k];
// 			}
// 			if(maxSum < currSum) {
// 				maxSum = currSum;
// 			}
// 		}
// 	}
// 	return maxSum;
// }

int findMaximumSubArray(std::vector<int>arr) {

	std::vector<int>cummlativeSum(arr.size(), 0);
	cummlativeSum[0] = arr[0];

	for(int i = 1; i < arr.size(); i++) {
		cummlativeSum[i] = cummlativeSum[i - 1] + arr[i];
	}

	int maxSum = INT_MIN;
	int currSum = INT_MIN;

	for(int i = 0; i < arr.size(); i++) {
		for(int j = i; j < arr.size(); j++) {
			currSum = INT_MIN;
			currSum = cummlativeSum[j] - cummlativeSum[i - 1]; 
			if(currSum > maxSum) {
				maxSum = currSum;
			}
		}
	}
	return maxSum;
}
	

int main() {

	std::vector<int>arr = {1};
	std::cout << findMaximumSubArray(arr) << '\n';

	return 0;
}