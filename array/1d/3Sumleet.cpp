#include<bits/stdc++.h>


std::vector<std::vector<int>>threeSum(std::vector<int>arr) {

	std::set<std::vector<int>>finalResult;
	std::sort(arr.begin(), arr.end());

	for(int i = 0; i < arr.size(); i++) {
		int left = i + 1;
		int right = arr.size() - 1;

		while(left < right) {
			long long int currSum = arr[i];
			currSum += arr[left] + arr[right];
			if(currSum == 0) {
				finalResult.insert(std::vector<int>{arr[i], arr[left], arr[right]});
				left++;
			}
			else if(currSum < 0) {
				left++;
			}
			else {
				right--;
			}
		}
	}
	return std::vector<std::vector<int>>(finalResult.begin(), finalResult.end());
}


int main() {

	std::vector<int>arr = {-1,0,1,2,-1,-4};

	auto takeResult = threeSum(arr);
	for(auto v: takeResult) {
		for(auto no: v) {
			std::cout << no << " ";
		}
		std::cout << '\n';
	}


	return 0;
}
