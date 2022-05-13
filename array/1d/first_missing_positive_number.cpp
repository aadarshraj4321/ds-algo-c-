#include<bits/stdc++.h>

int findMissingNumber(std::vector<int>arr) {
	int num = arr.size();
	for(int i = 0; i < num; i++) {
		if(arr[i] <= 0 || arr[i] > num + 1) {
			arr[i] = num + 2;
		}
	}
	
	for(auto no: arr) {
		int negNumber = (no > 0) ? no - 1 : -no - 1;
		if(negNumber >= 0 && negNumber < num) {
			arr[negNumber] = -arr[negNumber];
		}
	}


	for(int i = 0; i < num; i++) {
		if(arr[i] > 0) {
			return i + 1;
		}
	}
	return num + 1; 
}


int main() {

	std::vector<int>arr = {3, 2, -6, 1, 0};
	std::cout << findMissingNumber(arr) << '\n';

	return 0;
}