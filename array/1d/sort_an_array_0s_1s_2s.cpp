#include<bits/stdc++.h>

void sortZerosOnesTwos(std::vector<int>&arr) {

	int lowerB = 0;
	int higherB = arr.size() - 1;
	int midB = 0;

	while(midB <= higherB) {
		if(arr[midB] == 0) {
			std::swap(arr[midB++], arr[lowerB++]);
		}
		else if(arr[midB] == 1) {
			midB++;
		}
		else if(arr[midB] == 2) {
			std::swap(arr[midB], arr[higherB--]);
		}
	}

}


int main() {

	std::vector<int>arr = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
	sortZerosOnesTwos(arr);

	for(auto ele: arr) {
		std::cout << ele << " ";
	}

	return 0;
}