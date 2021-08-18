#include<bits/stdc++.h>


void printSubset(std::vector<int>arr, int i, int n, std::string osf) {

	if(i == n) {
		std::cout << "[" << osf << "]" << '\n';
		return;
	}

	// when we choose the element to be included
	printSubset(arr, i + 1, n, osf + std::to_string(arr[i]));
	// when we choose the element to not be included
	printSubset(arr, i + 1, n, osf);
}

int main() {

	std::vector<int>arr = {1, 2, 3};
	printSubset(arr, 0, 3, "");

	return 0;
}