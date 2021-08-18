#include<bits/stdc++.h>


void finalResult(std::vector<std::vector<int>>&arr, std::vector<int>&nums, std::vector<int>result, int idx) {
	if(idx == nums.size()) {
		arr.push_back(result);
		return;
	}

	result.push_back(nums[idx]);
	finalResult(arr, nums, result, idx + 1); 
	result.pop_back();
	finalResult(arr, nums, result, idx + 1);
}


int main() {
	std::vector<int>nums = {1, 2, 3};
	std::vector<std::vector<int>>arr;
	std::vector<int>result;	



	return 0;
}
