#include<bits/stdc++.h>

std::vector<int>moveNegBeg(std::vector<int>arr) {

	int left = 0;
	int i = 0;
	while(i < arr.size()) {
		if(arr[i] < 0) {
			std::swap(arr[i], arr[left]);
			left++;
			
		}
		i++;
	}

	return arr;
}

int main() {

	std::vector<int>arr = {1, 2, -2, -3, 0, 5};
	auto takeResult = moveNegBeg(arr);

	for(auto no: takeResult) {
		std::cout << no << " ";
	}

	return 0;
}