#include<bits/stdc++.h>


std::vector<int>closestPair(std::vector<int>&arr1, std::vector<int>&arr2, int x) {

	std::vector<int>arr3;

	int first = 0;
	int second = 0;
	int close = 10000;
	for(int i = 0; i < arr1.size(); i++) {
		for(int j = 0; j < arr2.size(); j++) {
			if(arr1[i] + arr2[j] <= x) {
				int dum = x - (arr1[i] + arr2[j]);
				if(dum <= close) {
					close = dum;
					first = arr1[i];
					second = arr2[j];
				}
			}
		}
	}
	arr3.push_back(first);
	arr3.push_back(second);

	return arr3;
}


int main() {

	std::vector<int>arr = {1, 3, 5, 7};
	std::vector<int>arr1 = {10, 20, 30, 40};
	int x = 50;

	std::vector<int>final = closestPair(arr, arr1, x);
	for(auto ele: final) {
		std::cout << ele << " ";
	}
	
	return 0;
}