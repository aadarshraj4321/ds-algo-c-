#include<bits/stdc++.h>


std::vector<int>closestPair(std::vector<int>&arr1, std::vector<int>&arr2, int x) {

	std::vector<int>arr3;
	int i = 0;
	int close = 100000;
	int first = 0;
	int second = 0;
	int right = arr2.size() - 1;
	int left = 0;

	while(left <= right) {
		int curr = arr1[left] + arr2[right];
		if(curr > x) {
			right--;
		}
		else if(curr <= x) {
			int dum = x - curr;
			if(dum <= close) {
				close = dum;
				first = arr1[left];
				second = arr2[right];
			}
			left++;
		}
	}
	arr3.push_back(first);
	arr3.push_back(second);
	return arr3;
}


int main() {

	std::vector<int>arr = {1, 3, 5, 7};
	std::vector<int>arr1 = {10, 20, 30, 40};
	int x = 32;

	std::vector<int>final = closestPair(arr, arr1, x);
	for(auto ele: final) {
		std::cout << ele << " ";
	}


	return 0;
}