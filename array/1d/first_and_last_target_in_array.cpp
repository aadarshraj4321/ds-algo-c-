#include<bits/stdc++.h>

int firstIndexFound(std::vector<int>arr, int target) {

	int left = 0;
	int right = arr.size() - 1;
	int mini = INT_MAX;
	while(left <= right) {
		int mid = (left + right) / 2;
		if(arr[mid] == target) {
			mini = std::min(mini, mid);
			right = mid - 1;
		}
		else if(arr[mid] > target) {
			right = mid - 1;
		}
		else {
			left = mid + 1;
		}
	}
	if(mini == INT_MAX) {
		mini = -1;
	}
	return mini;
}

int lastIndexFound(std::vector<int>arr, int target) {

	int left = 0;
	int right = arr.size() - 1;
	int maxi = INT_MIN;

	while(left <= right) {
		int mid = (left + right) / 2;
		if(arr[mid] == target) {
			maxi = std::max(maxi, mid);
			left = mid + 1;
		}
		else if(arr[mid] > target) {
			right = mid - 1;
		}
		else {
			left = mid + 1;
		}
	}
	if(maxi == INT_MIN) {
		maxi = -1;
	}
	return maxi;
}


std::pair<int, int>findFirstAndLast(std::vector<int>arr, int target) {

	int a = firstIndexFound(arr, target);
	int b = lastIndexFound(arr, target);

	return std::make_pair(a, b);

}



int main() {

	std::vector<int>arr = {-10, -5, -5, -5, 2};
	std::pair<int, int> takeResult = findFirstAndLast(arr, -5);

	std::cout << takeResult.first << " " << takeResult.second << '\n';

	return 0;
}