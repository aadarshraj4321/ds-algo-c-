#include<bits/stdc++.h>


void moveZeros(std::vector<int>arr) {

	int zerosCount = 0 ;
	for(int i = 0; i < arr.size(); i++) {
		if(arr[i] != 0) {
			std::cout << arr[i] << " ";
		}
		else {
			zerosCount++;
		}
	}
	for(int i = 0; i < zerosCount; i++) {
		std::cout << 0 << " ";
	}
	std::cout << '\n';
}


int main() {

	std::vector<int>arr = {5, 2, 0, 2, 0, 1, 3};
	moveZeros(arr);

	return 0;
}