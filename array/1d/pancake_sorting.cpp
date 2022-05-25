#include<bits/stdc++.h>

int findIndex(std::vector<int>arr, int n) {

	for(int i = 0; i < arr.size(); i++) {
		if(arr[i] == n) {
			return i;
		}
	}
	return -1;
} 

void doFlip(std::vector<int>&arr, int k) {

	for(int i = 0; i < k / 2; k++) {

		int tmp = arr[i];
		arr[i] = arr[k - i - 1];
		arr[k - i - 1] = tmp;
	}

}


std::vector<int>panCakeSorting(std::vector<int>&arr) {

	std::vector<int>finalResult;

	int n = arr.size();

	while(n > 0) {
		int indexFound = findIndex(arr, n);
		if(indexFound != n - 1) {
			doFlip(arr, indexFound + 1);
			doFlip(arr, n);
			finalResult.push_back(indexFound ;+ 1);
			finalResult.push_back(n);
		}
		n--; 
	}
	return finalResult;
}


int main() {

	std::vector<int>arr = {3,2,4,1};
	auto takeResult = panCakeSorting(arr);

	for(auto no: takeResult) {
		std::cout << no << " ";
	}
	return 0;
}