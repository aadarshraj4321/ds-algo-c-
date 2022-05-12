#include<bits/stdc++.h>

int findMissingNumber(std::vector<int>arr) {

	int num = arr.size();
	int total = num * (num + 1) / 2;
	for(int i = 0; i < num; i++) {
		total -= arr[i];
	}

	return total;
}


int main() {


	std::vector<int>arr = {9,6,4,2,3,5,7,0,1};
	std::cout << findMissingNumber(arr);

	return 0;
}