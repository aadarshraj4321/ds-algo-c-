#include<bits/stdc++.h>


int miniAbsDiff(std::vector<int>&arr) {

	std::sort(arr.begin(), arr.end());
	int mini = 100000;
	for(int i = 1; i < arr.size(); i++) {
		if(arr[i] - arr[i - 1] < mini) {
			mini = arr[i] - arr[i - 1];
		}
	}
	return mini;
}

// 1, 3, 5, 6, 8, 10

int main() {

	std::vector<int>arr = {1, 5, 3, 10, 8};
	std::cout << miniAbsDiff(arr) << '\n';

	return 0;
}