#include<bits/stdc++.h>


int maxProductSubArray(std::vector<int>arr) {

	int posP = 1;
	int negP = 1;
	int maxi = INT_MIN;
	bool isZero = false;
	bool isPos = false;

	for(int i = 0; i < arr.size(); i++) {

		if(arr[i] > 0) {
			isPos = true;
			posP *= arr[i];
			if(negP != 1) {
				negP *= arr[i];
			}
		}
		else if(arr[i] < 0) {
			int tmp = posP;
			posP = std::max(1, negP * arr[i]);
			negP = tmp * arr[i];
		}
		else {
			isZero = true;
			posP = 1;
			negP = 1;
		}

		if(maxi < posP) {
			maxi = posP;
		}
	}

	if(maxi == 1) {
		if(isPos) {
			return maxi;
		}
		if(isZero) {
			return 0;
		}
	}
	return maxi;
}


int main() {

	std::vector<int>arr = {-1, -1, 0};
	std::cout << maxProductSubArray(arr) << '\n';
	return 0;
}