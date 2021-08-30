#include<bits/stdc++.h>

int swapCount = 0;
void selectionSort(std::vector<int>&arr) {

	for(int i = 0; i < arr.size() - 1; i++) {
		int minIndex = i;
		for(int j = i + 1; j < arr.size(); j++) {
			if(arr[j] < arr[minIndex]) {
				minIndex = j;
			}
		}
		std::swap(arr[i], arr[minIndex]);
		swapCount++;
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
	selectionSort(arr);
	for(auto ele: arr) {
		std::cout << ele << " ";
	}
	std::cout << '\n';
	std::cout << swapCount << '\n';

	return 0;
}