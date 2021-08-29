#include<bits/stdc++.h>


int swapCount = 0;

void bubbleSort(std::vector<int>&arr, int n) {

	for(int i = 0; i < n - 1; i++) {
		for(int j = 0; j < n - i - 1; j++) {
			if(arr[j] > arr[j + 1]) {
				std::swap(arr[j], arr[j + 1]);
				swapCount++;
			}
		}
	}
}


int main() {

	int n;
	std::cin >> n;
	std::vector<int>arr;
	for(int i = 0; i < n; i++) {
		int x;
		std::cin >> x;
		arr.push_back(x);
	}

	bubbleSort(arr, n);

	for(auto ele: arr) {
		std::cout << ele << " ";
	}

	std::cout << '\n';
	std::cout << swapCount << '\n';

	return 0;
}