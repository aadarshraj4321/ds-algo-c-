#include<bits/stdc++.h>

std::vector<int>findFrequencyTwo(std::vector<int>arr) {

	std::vector<int>finalResult;
	for(int i = 0; i < arr.size(); i++) {
		int tmp = std::abs(arr[i]);
		if(arr[tmp - 1] < 0) {
			finalResult.push_back(tmp);
		}
		else {
			arr[tmp - 1] *= -1;
		}
	}
	return finalResult;
}

int main() {

	std::vector<int>arr = {2, 1, 1, 3, 4, 5, 6, 6, 7, 8, 2, 9};
	auto takeResult = findFrequencyTwo(arr);
	for(auto no: takeResult) {
		std::cout << no << " ";
	}

	return 0;
}