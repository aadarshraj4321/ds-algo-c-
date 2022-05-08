#include<bits/stdc++.h>


int main() {

	std::vector<int>arr = {1, -5, 2, 5, 6, -10, 2};
	std::vector<int>cummArr(7, 0);

	cummArr[0] = arr[0];

	int left;
	int right;

	for(int i = 1; i < arr.size(); i++) {
		cummArr[i] = cummArr[i - 1] + arr[i];
	}

	int maxiSubArray = 0;
	int currSubArray = 0;

	for(int i = 0; i < arr.size(); i++) {
		for(int j = i; j < arr.size(); j++) {
			currSubArray = 0;

			currSubArray = cummArr[j] - cummArr[i - 1];

			if(currSubArray > maxiSubArray) {
				maxiSubArray = currSubArray;
				left = i;
				right = j;
			}
		}
	}

	for(int i = left; i <= right; i++) {
		std::cout << arr[i] << " ";
	}


	return 0;
}