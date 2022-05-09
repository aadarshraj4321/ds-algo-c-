#include<bits/stdc++.h>


std::vector<std::vector<int>>threeSum(std::vector<int>arr) {

	std::sort(arr.begin(), arr.end());
	std::vector<std::vector<int>>finalResult;

	for(int i = 0; i <= arr.size() - 3; i++) {
		int left = i + 1;
		int right = arr.size() - 1;

		while(left < right) {
			int currSum = arr[i];
			currSum += arr[left];
			currSum += arr[right];
			if(currSum == 0) {
				finalResult.push_back({arr[i], arr[left], arr[right]});
				left++;
				right--;
			}
			else if(currSum > 0) {
				right--;
			}
			else {
				left++;
			}
		}
	}
	std::sort(finalResult.begin(), finalResult.end());
	finalResult.erase(std::unique(finalResult.begin(), finalResult.end()), finalResult.end());
	return finalResult;
}

int main() {

	std::vector<int>arr = {-1,0,1,2,-1,-4};
	// Output: [[-1,-1,2],[-1,0,1]]

	auto takeResult = threeSum(arr);

	for(auto v: takeResult) {
		for(auto no: v) {
			std::cout << no << " ";
		}
		std::cout << '\n';
	}
	return 0;
}