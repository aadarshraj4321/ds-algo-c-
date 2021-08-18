#include<bits/stdc++.h>


std::map<std::vector<int>, bool>mp;
std::vector<std::vector<int>>finalAns;

void subsetTwo(std::vector<int>&nums, std::vector<int>&subSet, int k, int n) {

	if(k == n) {
		std::vector<int>tmp = subSet;
		sort(tmp.begin(), tmp.end());
		if(mp.find(tmp) == mp.end()) {
			mp[tmp] = true;
			finalAns.push_back(tmp);
		}
	}
	else {
		subSet.push_back(nums[k]);
		subsetTwo(nums, subSet, k + 1, n);
		subSet.pop_back();
		subsetTwo(nums, subSet, k + 1, n);
	}
} 

int main() {

	std::vector<int>arr = {1, 2, 2};
	std::vector<int>subSet;
	subsetTwo(arr, subSet, 0, arr.size());

	for(int i = 0; i < finalAns.size(); i++) {
		for(int j = 0; j < finalAns[0].size(); j++) {
			std::cout << finalAns[i][j] << " ";
		}
		std::cout << '\n';
	}

	return 0;
}