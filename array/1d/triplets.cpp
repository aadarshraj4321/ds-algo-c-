#include<bits/stdc++.h>


std::vector<std::vector<int>>findTriplets(std::vector<int>arr, int target) {

	std::sort(arr.begin(), arr.end());
	std::vector<std::vector<int>>finalResult;

	for(int i = 0; i <= arr.size() - 3; i++) {

		int left = i + 1;
		int right = arr.size() - 1;

		while(left < right) {
			int currSum = arr[i];
			currSum += arr[left];
			currSum += arr[right];
			if(currSum == target) {
				finalResult.push_back({arr[i], arr[left], arr[right]});
				left++;
				right--;
			}
			else if(currSum > target) {
				right--;
			}
			else {
				left++;
			}
		}
	}
	return finalResult;
}


int main() {


	std::vector<int>arr = {2, 5, 3, 7, 8, 9, 2, 4, 6, 3};
	int target = 10;

	// std::vector<std::vector<int>>takeResult = findTriplets(arr, target);
	// if(takeResult.size() < 0) {
	// 	std::cout << "No Triplets Found\n";
	// }
	// for(int i = 0; i < takeResult.size(); i++) {
	// 	for(int j = 0; j < takeResult.size(); j++) {
	// 		std::cout << takeResult[i][j] << " ";
	// 	}
	// 	std::cout << '\n';
	// }

	auto takeResult = findTriplets(arr, target);
	for(auto v: takeResult) {
		for(auto no: v) {
			std::cout << no << " ";
		}
		std::cout << '\n';
	}

	return 0;
}