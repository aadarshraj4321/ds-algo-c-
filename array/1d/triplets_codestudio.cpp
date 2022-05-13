#include<bits/stdc++.h>

std::vector<std::vector<int>>findTriplets(std::vector<int>arr) {

	std::sort(arr.begin(), arr.end());
	std::vector<std::vector<int>>vec;

	for(int i = 0; i <= arr.size() - 3; i++) {
		int left = i + 1;
		int right = arr.size() - 1;
		while(left < right) {
			int totalSum = arr[i] + arr[left] + arr[right];
			if(totalSum == 0) {
				vec.push_back({arr[i], arr[left], arr[right]});
				left++;
				right--;
			}
			else if(totalSum > 0) {
				right--;
			}
			else {
				left++;
			}
		}
	}
	vec.erase( unique( vec.begin(), vec.end() ), vec.end() );
	if(vec.size() > 0) {
		return vec;
	}
	else {
		vec.push_back({-1});
		return vec;
	}
}

int main() {

	std::vector<int>arr = {83, -32, -100, 13, 57, -42, -43, 4, 79, 75};

	auto takeResult = findTriplets(arr);
	for(auto v: takeResult) {
		for(auto no: v) {
			std::cout << no << " ";
		}
		std::cout << '\n';
	}
	return 0;
}