#include<bits/stdc++.h>

int findLongestSubArray(std::vector<int>arr) {

	std::vector<int>cumArr(arr.size(), 0);
	cumArr[0] = arr[0];
	int left = 0;
	int right = 0;
	int currLength = 0;

	int maxLengthSubArray = -1;
	int currSum = 0;
	for(int i = 1; i < arr.size(); i++) {
		cumArr[i] = cumArr[i - 1] + arr[i];
	}

	for(int i = 0; i < arr.size(); i++) {
		for(int j = i; j < arr.size(); j++) {
			currSum = 0;
			currSum = cumArr[j] - cumArr[i - 1];
			if(currSum == 0) {
				left = i;
				right = j;
			}
			currLength = right - left;
			if(currLength == 0) {
				maxLengthSubArray = 0;
			}

			else if(currLength > maxLengthSubArray) {
				maxLengthSubArray = currLength + 1;
			}
		}
	}
	return maxLengthSubArray;
}


int main() {

	std::vector<int>arr = {0};
	std::cout << findLongestSubArray(arr) << '\n';

	return 0;
}