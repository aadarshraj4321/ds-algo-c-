#include<bits/stdc++.h>

void sortInLinear(std::vector<int>&arr) {

	int left = 0;
	int right = arr.size() - 1;
	int c = 0;

	while(c <= right) {

		if(arr[c] == 2) {
			std::swap(arr[c], arr[right]);
			right--;
		}
		else if(arr[c] == 0) {
			std::swap(arr[c], arr[left]);
			left++, c++;
		}
		else {
			c++;
		}
	}
}

int main() {

	std::vector<int>arr = {1, 2, 0, 2, 1, 0, 1, 2, 0, 1};
	sortInLinear(arr);

	for(auto no: arr) {
		std::cout << no << " ";
	}

	return 0;
}