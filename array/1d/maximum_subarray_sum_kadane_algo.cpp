#include<bits/stdc++.h>


int maxiSubarray(std::vector<int>arr) {

	int sum = 0;
	int maxi = INT_MIN;
	for(int i = 0; i < arr.size(); i++) {
		sum += arr[i];
		maxi = std::max(sum, maxi);
		if(sum < 0) sum = 0;
	}
	return maxi;
}

int main() {

	std::vector<int>arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
	std::cout << maxiSubarray(arr) << '\n';

	return 0;
}