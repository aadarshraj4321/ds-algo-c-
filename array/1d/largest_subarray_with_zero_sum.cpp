#include<bits/stdc++.h>


// int subArray(std::vector<int>arr) {

// 	int sum = 0;
// 	int maxi = INT_MIN;
// 	for(int i = 0; i < arr.size(); i++) {
// 		sum += arr[i];
// 		maxi = std::max(sum, maxi);
// 		if(sum < 0) sum = 0;
// 	}
// 	return maxi;
// }


int maxLenSubArrayZero(std::vector<int>arr) {

	std::unordered_map<int, int>mt;
	int maxi = 0;
	int sum = 0;

	for(int i = 0; i < arr.size(); i++) {
		sum += arr[i];
		if(sum == 0) {
			maxi = i + 1;
		}
		else {
			if(mt.find(sum) != mt.end()) {
				maxi = std::max(maxi, i - mt[sum]);
			}
			else {
				mt[sum] = i;
			}
		}
	}
	return maxi;
}


int main() {

	std::vector<int>arr = {1, -1, 2, 3, 11, -11};
	std::cout << maxLenSubArrayZero(arr) << '\n';

	return 0;
}