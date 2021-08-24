#include<bits/stdc++.h>


void scaleneAlgo(std::vector<int>&arr, std::vector<int>&arr1, int l, int r, int x) {
	// for(auto ele: arr1) {
	// 	std::cout << ele << " ";
	// }
	int count = 0;
	for(int i = 0; i < arr.size(); i++) {
		count += arr1[i];
		arr[i] += count;
	}

	for(auto ele: arr) {
		std::cout << ele << " ";
	}


}


int main() {

	std::vector<int>arr = {1, 3, 2, 3, 4};

	int q;
	std::cin >> q;
	std::vector<int>arr1(arr.size() + 1, 0);
	while(q--) {
		int l, r, x;
		std::cin >> l >> r >> x;
		arr1[l] += x;
		arr1[r + 1] -= x;
		scaleneAlgo(arr, arr1, l, r, x);
		std::cout << '\n';
	}

	std::cout << '\n';
	std::cout << '\n';
	for(auto ele: arr) {
		std::cout << ele << " ";
	} 

	return 0;
}