#include<bits/stdc++.h>

void reverseTheArray(std::vector<int>&arr, int target) {

	int right = arr.size() - 1;
	int left = target + 1;
	while(left < right) {
		std::swap(arr[left], arr[right]);
		left++;
		right--;
	}
}


int main() {

	std::vector<int>arr = {10, 4, 5, 2, 3, 6, 1, 3, 6};

	int target = 3;
	reverseTheArray(arr, target);

	for(auto no: arr) {
		std::cout << no << " ";
	}

	// 10 4 5 2 6 3 1 6 3  



	return 0;
}