#include<bits/stdc++.h>

std::vector<int>findOddEven(std::vector<int>arr) {

	std::map<int, int>mp;
	std::vector<int>finalResult;
	for(int i = 0; i < arr.size(); i++) {
		mp[arr[i]]++;
	}

	int odd = 0;
	int even = 0;

	for(auto no: mp) {
		if(no.second % 2 == 0) {
			even++;
		}
		else if(no.second % 2 == 1) {
			odd++;
		}
	}

	finalResult.push_back(even);
	finalResult.push_back(odd);
	return finalResult;

}


int main() {

	std::vector<int>arr = {1, 1, 2, 3, 4};
	auto takeResult = findOddEven(arr);

	for(auto no: takeResult) {
		std::cout << no << " ";
	}
	std::cout << '\n';

	return 0;
}