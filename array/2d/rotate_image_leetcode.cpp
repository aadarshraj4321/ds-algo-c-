#include<bits/stdc++.h>

void rotateImage(std::vector<int>&arr) {

	int n = arr.size();
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < i; j++) {
			std::swap(arr[i][j], arr[j][i]);
		}
	}

	for(int i = 0; i < n; i++) {
		std::reverse(arr[i].begin(), arr[i].end());
	}
}


int main() {

	std::vector<std::vector<int>>arr;

	for(int i = 0; i < 3; i++) {
		std::vector<int>arr1;
		for(int j = 0; j < 3; j++) {
			int x;
			std::cin >> x;
			arr1.push_back(x);
		}
		arr.push_back(arr1);
	}


	for(int i = 0; i < arr.size(); i++) {
		for(int j = 0; j < arr[0].size(); j++) {
			std::cout << arr[i][j] << " ";
		}
		std::cout << '\n';
	}

	return 0;
}