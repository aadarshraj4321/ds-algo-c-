#include<bits/stdc++.h>


int main() {

	std::vector<int>arr = {1, -5, 2, 5, 6, -10, 2};
	int left;
	int right;

	int maxiSubArray = 0;
	for(int i = 0; i < arr.size(); i++) {
		for(int j = i; j < arr.size(); j++) {
			int currSubArray = 0;
			for(int k = i; k <= j; k++) {
				currSubArray += arr[k];
			}
			if(currSubArray > maxiSubArray) {
				maxiSubArray = currSubArray;
				left = i;
				right = j;
			}
		}
	}

	std::cout << maxiSubArray << '\n';
	for(int i = left; i <= right; i++) {
		std::cout << arr[i] << " ";
	}

	return 0;
}