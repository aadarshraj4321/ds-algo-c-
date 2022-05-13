#include<bits/stdc++.h>


std::vector<std::pair<int,int>> twoSum(std::vector<int>& arr, int target, int n)
{
	std::sort(arr.begin(), arr.end());
	std::vector<std::pair<int, int>>vec;
	
	int left = 0;
	int right = n - 1;
	
	while(left < right) {
		int total = arr[left] + arr[right];
		if(total == target) {
			vec.push_back(std::make_pair(arr[left], arr[right]));
			left++;
			right--;
		}
		else if(total > target) {
			right--;
		}
		else {
			left++;
		}
	}

	for(int i = 0; i < vec.size(); i++) {
		std::cout << vec[i].first << " " << vec[i].second << '\n';
	}

	return vec;
}


int main() {

	std::vector<int>arr = {1, -1, -1, 2, 2};
	twoSum(arr, arr.size(), 1);


	return 0;
}
