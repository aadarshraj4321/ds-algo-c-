#include<bits/stdc++.h>

int findSecondLargestElement(std::vector<int>arr) {

	std::sort(arr.begin(), arr.end());
	int secondLargestElement = -1;

	for(int i = arr.size() - 1; i > 0; i--) {
		if(arr[i] != arr[i - 1]) {
			secondLargestElement = arr[i - 1];
			return secondLargestElement;
		}
	}
	return -1;
}


int main() {

	std::vector<int>arr = {12, 1, 35, 10, 34, 1};
	std::cout << findSecondLargestElement(arr) << '\n';

	return 0;
}