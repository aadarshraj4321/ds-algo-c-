#include<bits/stdc++.h>


std::vector<int> removeDuplicates(std::vector<int> arr) {

  std::map<int, int>mp;
	for(int i = 0; i < arr.size(); i++) {
		mp[arr[i]]++;
	}
	
	arr.resize(mp.size());
	int j = 0;
	for(auto no: mp) {
		arr[j] = no.first;
		j++;
	}
	return arr;
}



int main() {

	std::vector<int>arr = {1, 3, 3, 3, 3, 3, 4, 9, 23, 35};
	auto takeResult = removeDuplicates(arr);

	for(auto no: takeResult) {
		std::cout << no << " ";
	}


	return 0;
}