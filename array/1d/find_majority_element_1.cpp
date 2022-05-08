#include<bits/stdc++.h>


std::vector<int>findMajority(std::vector<int>arr) {

	int elementOne = arr[0];
	int countOne = 1;

	int elementTwo = 0;
	int countTwo = 0;

	for(int i = 1; i < arr.size(); i++) {
		if(arr[i] == elementOne) {
			countOne++;
		}
		else if(arr[i] == elementTwo) {
			countTwo++;
		}
		else if(countOne == 0) {
			elementOne = arr[i];
			countOne = 1;
		}
		else if(countTwo == 0) {
			elementTwo = arr[i];
			countTwo = 1;
		}
		else {
			countOne--;
			countTwo--;
		}
	}

	countOne = countTwo = 0;
	for(int i = 0; i < arr.size(); i++) {
		if(arr[i] == elementOne)
			countOne++;
		else if(arr[i] == elementTwo)
			countTwo++;
	}

	std::vector<int>ans;
	if(countOne > arr.size() / 3)
		ans.push_back(elementOne);
	if(countTwo > arr.size() / 3)
		ans.push_back(elementTwo);


	return ans;
}



int main() {

	int n;
	std::cin >> n;
	std::vector<int>arr;

	int x;
	for(int i = 0; i < n; i++) {
		std::cin >> x;
		arr.push_back(x);
	}

	std::vector<int>finalAns;

	finalAns = findMajority(arr);
	if(finalAns.size() == 0) {
		std::cout << "No Majority Element\n";
	}
	else {
		for(int i = 0; i < finalAns.size(); i++) {
			std::cout << finalAns[i] << " ";
		}
		std::cout << '\n';
	}


	return 0;
}