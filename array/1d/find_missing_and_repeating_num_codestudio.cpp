#include<bits/stdc++.h>

std::vector<int>findMissingRepeatingNum(std::vector<int>arr) {

	std::map<int, int>mp;
	std::vector<int>finalResult;
	int totalSum = arr.size() * (arr.size() + 1) / 2;
	for(int i = 0; i < arr.size(); i++) {
		mp[arr[i]]++;
		totalSum -= arr[i];
	}

	int repeatedNumber = 0;
	for(auto no: mp) {
		if(no.second >= 2) {
			repeatedNumber = no.first;
		}
	}

	totalSum += repeatedNumber;
	finalResult.push_back(repeatedNumber);
	finalResult.push_back(totalSum);
	return finalResult;
}


int main() {

	std::vector<int>arr = {2, 2};
	auto takeResult = findMissingRepeatingNum(arr);

	for(auto no: takeResult) {
		std::cout << no << " ";
	}

	return 0;
}