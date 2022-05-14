#include<bits/stdc++.h>

std::vector<std::vector<int>>findTriplets(std::vector<int>arr, int k) {

	std::sort(arr.begin(), arr.end());
	std::vector<std::vector<int>>vec;

	for(int i = 0; i <= arr.size() - 3; i++) {
		int left = i + 1;
		int right = arr.size() - 1;
		while(left < right) {
			int totalSum = arr[i] + arr[left] + arr[right];
			if(totalSum == k) {
				vec.push_back({arr[i], arr[left], arr[right]});
				left++;
				right--;
			}
			else if(totalSum > k) {
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

	//std::vector<int>arr = {-200, 6, 14, 12, 208, 10, 16, 91, 4, -12, -84, 18, 13, 13};

	int t;
	std::cin >> t;
	std::vector<int>arr;
	while(t--) {
		int n;
		std::cin >> n;
		for(int i = 0; i < n; i++) {
			int num;
			std::cin >> num;
			arr.push_back(num);
		}
		int k;
		std::cin >> k;

		std::cout << '\n';
	auto takeResult = findTriplets(arr, k);
	for(auto v: takeResult) {
		for(auto no: v) {
			std::cout << no << " ";
		}
		std::cout << '\n';
		std::cout << '\n';
	}
	}


	return 0;
}