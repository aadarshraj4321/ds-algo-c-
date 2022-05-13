#include<bits/stdc++.h>

long long pairWithGivenSum(std::vector<int>arr, int target) {


	int totalPairSum = 0;
	std::unordered_set<int>track;

	for(int i = 0; i < arr.size(); i++) {
		int remainValue = target - arr[i];
		if(track.find(remainValue) != track.end()) {
			totalPairSum++;
		}
		track.insert(arr[i]);
	}
	return totalPairSum;
}


int main() {

	std::vector<int>arr = {10, 12, 10, 15, -1, 7, 6, 5, 4, 2, 1, 1, 1};
	int target = 11;
	std::cout << pairWithGivenSum(arr, target) << '\n'; 

	return 0;
}