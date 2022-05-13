#include<bits/stdc++.h>


std::vector<int>findMajorityElement(std::vector<int>arr) {


	std::vector<int>finalResult;
	int firstElement = arr[0];
	int secondElement = 0;

	int firstElementCount = 1;
	int secondElementCount = 0;

	for(int i = 1; i < arr.size(); i++) {

		if(arr[i] == firstElement) {
			firstElementCount++;
		}
		else if(arr[i] == secondElement) {
			secondElementCount++;
		}
		else if(firstElementCount == 0) {
			firstElement = arr[i];
			firstElementCount = 1;
		}
		else if(secondElementCount == 0) {
			secondElement = arr[i];
			secondElementCount = 1;
		}
		else {
			secondElementCount--;
			firstElementCount--;
		}
	}

	firstElementCount = 0;
	secondElementCount = 0;
	for(int i = 0; i < arr.size(); i++) {
		if(arr[i] == firstElement) {
			firstElementCount++;
		}
		else if(arr[i] == secondElement) {
			secondElementCount++;
		}
	}

	if(firstElementCount > arr.size() / 3) {
		finalResult.push_back(firstElement);
	}
	if(secondElementCount > arr.size() / 3) {
		finalResult.push_back(secondElement);
	}

	return finalResult;
}

int main() {

	std::vector<int>arr = {7, 4, 4, 9, 7};
	auto takeResult = findMajorityElement(arr);

	for(auto no: takeResult) {
		std::cout << no << " ";
	}

	return 0;
}