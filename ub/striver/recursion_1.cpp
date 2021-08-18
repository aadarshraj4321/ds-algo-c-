#include<bits/stdc++.h>


void printSubSequence(std::vector<int>&arr, int i, std::string osf) {

	if(i == arr.size()) {
		std::cout << "[" << osf << "]" << '\n';
		return;
	}

	printSubSequence(arr, i + 1, osf + std::to_string(arr[i]) + ",");
	printSubSequence(arr, i + 1, osf);

}


void printSubSequence2(int index, std::vector<int>&ds, int arr[], int n) {

	if(index == n) {
		for(auto it: ds) {
			std::cout << it << " ";
		}
		std::cout << '\n';
		return;
	}

	// pick the element
	ds.push_back(arr[index]);
	printSubSequence2(index + 1, ds, arr, n);
	ds.pop_back();
	// not pick the element
	printSubSequence2(index + 1, ds, arr, n);

}


int main() {

	std::vector<int>arr = {1, 2, 2};
	printSubSequence(arr, 0, "");

	std::cout << '\n';
	std::cout << '\n';

	int arr1[] = {1, 2, 3};
	std::vector<int>ds;
	printSubSequence2(0, ds, arr1, 3);

	return 0;
}