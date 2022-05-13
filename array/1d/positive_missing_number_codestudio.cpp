#include<bits/stdc++.h>

int findMissingPosNumber(std::vector<int>arr) {

	int n = arr.size();
	for(int i = 0; i < n; i++) {
		if(arr[i] <= 0 || arr[i] > n + 1) {
			arr[i] = n + 2;
		}
	}

	for(auto no: arr) {
		int negNumber = (no > 0) ? no - 1 : -no - 1;
		if(negNumber >= 0 && negNumber < n) {
			arr[negNumber] = -arr[negNumber];
		}
	}

	for(int i = 0; i < n; i++) {
		if(arr[i] > 0) {
			return i + 1;
		}
	}
	return n + 1;

}


int main() {

	std::vector<int>arr = {0, 1, 2, 3, 4};
	std::cout << findMissingPosNumber(arr) << '\n';

	return 0;
}