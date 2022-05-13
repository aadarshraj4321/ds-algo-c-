#include<bits/stdc++.h>

void sortInLinear(std::vector<int>&arr) {

	int countZero = 0;
	int countOne = 0;
	int countTwo = 0;

	for(int i = 0; i < arr.size(); i++) {

		if(arr[i] == 0) {
			countZero++;	
		}
		else if(arr[i] == 1) {
			countOne++;
		}
		else if(arr[i] == 2) {
			countTwo++;
		}
	}

	for(int i = 0; i < countZero; i++) {
		arr[i] = 0;
	}

	for(int i = countZero; i < (countZero + countOne); i++) {
		arr[i] = 1;
	}

	for(int i = (countZero + countOne); i < (countZero + countOne + countTwo); i++) {
		arr[i] = 2;
	}
}

int main() {

	std::vector<int>arr = {1, 2, 0, 2, 1, 0, 2, 0, 1, 0};
	sortInLinear(arr);

	for(auto no: arr) {
		std::cout << no << " ";
	}


	return 0;
}