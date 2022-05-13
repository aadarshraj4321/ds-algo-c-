#include<bits/stdc++.h>


std::vector<std::vector<int>>findPair(std::vector<int>arr, int target) {
	
	std::sort(arr.begin(), arr.end());
	std::unordered_set<int>track;
	std::vector<std::vector<int>>finalResult;
	for(int i = 0; i < arr.size(); i++) {
		int remainValue = target - arr[i];
		if(track.find(remainValue) != track.end()) {

			finalResult.push_back({remainValue, arr[i]});
		}
		track.insert(arr[i]);
	}
	return finalResult;
}


int main() {


	std::vector<int>arr = {2, -6, 2, 5, 2 };
	int target = 4;

	// std::vector<int>takeResult;
	// takeResult = findPair(arr, target);

	auto takeResult = findPair(arr, target);

	if(takeResult.size() == 0) {
		std::cout << "No Pair Found\n";
	}

	for(int i = 0; i < takeResult.size(); i++) {
		for(int j = 0; j < takeResult.size(); j++) {
			std::cout << takeResult[i][j] << " ";
		}
		std::cout << '\n';
	}

	return 0;
}