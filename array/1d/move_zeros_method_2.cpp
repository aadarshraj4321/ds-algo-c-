#include<bits/stdc++.h>


void moveZerosToEnd(std::vector<int>&arr) {

	int j = 0;
	for(int i = 0; i < arr.size(); i++) {
		if(arr[i] != 0) {
			std::swap(arr[i], arr[j]);
			j++;
		}
	}
}

int main() {

	std::vector<int>arr = {5, 2, 0, 2, 0, 1, 3};
	moveZerosToEnd(arr);

	for(auto no: arr) {
		std::cout << no << " ";
	}

	return 0;
}
