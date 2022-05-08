#include<bits/stdc++.h>


std::vector<int>findPair(std::vector<int>arr, int target) {
	std::unordered_set<int>track;
	std::vector<int>finalResult;
	for(int i = 0; i < arr.size(); i++) {
		int remainValue = target - arr[i];
		if(track.find(remainValue) != track.end()) {
			finalResult.push_back(remainValue);
			finalResult.push_back(arr[i]);
		}
		track.insert(arr[i]);
	}
	return finalResult;
}


int main() {


	std::vector<int>arr = {11, 23, 45, 23, 4, 2, -8};
	int target = 47;

	// std::vector<int>takeResult;
	// takeResult = findPair(arr, target);

	auto takeResult = findPair(arr, target);

	if(takeResult.size() == 0) {
		std::cout << "No Pair Found\n";
	}

	for(int i = 0; i < takeResult.size(); i++) {
		std::cout << takeResult[i] << " ";
	}

	return 0;
}