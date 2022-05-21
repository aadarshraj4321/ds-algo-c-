#include<bits/stdc++.h>

int findMinimum(std::vector<int>arr) {

	int left = 0;
	int right = arr.size() - 1;
	int mini = INT_MAX;
	while(left <= right) {
		int mid = (left + right) / 2;
		if(arr[mid] < mini) {
			mini = arr[mid];
		}
		if(arr[mid + 1] < arr.size() && arr[mid] > arr[mid + 1]) {
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}
	}
	return mini;
}


int main() {

	std::vector<int>arr = {8, 12, 15, 16, 6, 7};
	std::cout << findMinimum(arr) << '\n';

	return 0;
}