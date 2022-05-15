#include<bits/stdc++.h>

int searchInSortedArray(std::vector<int>arr, int target) {

	int left = 0;
	int right = arr.size() - 1;

	while(left <= right) {
		int mid = (left + right) / 2;
		if(arr[mid] == target) {
			return mid;
		}
		else if(arr[mid] > arr[arr.size() - 1]) {
			if(target < arr[0] || target > arr[mid]) {
				left = mid + 1;
			}
			else {
				right = mid - 1;
			}
		}
		else {
			if(target > arr[arr.size() - 1] || target < arr[mid]) {
				right = mid - 1;
			}
			else {
				left = mid + 1;
			}
		}
	}
	return -1;
} 

int main() {

	std::vector<int>arr = {100, -2, 6, 10, 11};
	int target = -2;

	std::cout << searchInSortedArray(arr, target) << '\n';


	return 0;
}