#include<bits/stdc++.h>


int findDuplicate(std::vector<int>arr) {
	std::map<int, int>mp;
	for(int i = 0; i < arr.size(); i++) {
		mp[arr[i]]++;
		if(mp[arr[i]] > 1) {
			return arr[i];
		}
	}
	return 0;
}


int main() {

	std::vector<int>arr = {1, 3, 4, 3, 2};
	std::cout << findDuplicate(arr) << '\n';

	return 0;
}