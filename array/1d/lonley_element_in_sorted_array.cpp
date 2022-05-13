#include<bits/stdc++.h>


bool singleElement(std::vector<int>arr, int mid) {
	if(mid == 0 && arr[0] != arr[1]) {
		return true;
	}
	if(mid == arr.size() && arr[mid] != arr[mid - 1]) {
		return true;
	}
	if(arr[mid] != arr[mid + 1] && arr[mid] != arr[mid - 1]) {
		return true;
	}
	return false;
}

int lonleyElement(std::vector<int>arr) {

	int left = 0;
	int right = arr.size() - 1;
	while(left <= right) {
		int mid = (left + right) / 2;
		if(singleElement(arr, mid)) return arr[mid];
		if(mid + 1 < arr.size() && arr[mid] == arr[mid + 1]) {
			if(mid % 2 == 0) {
				left = mid + 1;
			} 
			else {
				right = mid - 1;
			}
		}
		if(mid >= 1 && arr[mid] == arr[mid - 1]) {
			if(mid % 2 == 1) {
				left = mid + 1;
			}
			else {
				right = mid - 1;
			}
		}
	}
	return arr[left];
}


int main() {

	std::vector<int>arr = {0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 6, 6, 7, 7};
	std::cout << lonleyElement(arr) << '\n';

	return 0;
}